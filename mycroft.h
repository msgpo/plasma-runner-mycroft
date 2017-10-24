/******************************************************************************
 *  Copyright (C) 2016 – 2018 by Aditya Mehra <aix.m@outlook.com>             *
 *                                                                            *
 *  This library is free software; you can redistribute it and/or modify      *
 *  it under the terms of the GNU Lesser General Public License as published  *
 *  by the Free Software Foundation; either version 2 of the License or (at   *
 *  your option) any later version.                                           *
 *                                                                            *
 *  This library is distributed in the hope that it will be useful,           *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 *  Library General Public License for more details.                          *
 *                                                                            *
 *  You should have received a copy of the GNU Lesser General Public License  *
 *  along with this library; see the file COPYING.LIB.                        *
 *  If not, see <http://www.gnu.org/licenses/>.                               *
 *****************************************************************************/

#ifndef MYCROFT_H
#define MYCROFT_H

#include <KRunner/AbstractRunner>
#include <QtWebSockets/QWebSocket>

class Mycroft : public Plasma::AbstractRunner
{
    Q_OBJECT

public:
    Mycroft(QObject *parent, const QVariantList &args);
    ~Mycroft();

    void match(Plasma::RunnerContext &);
    void run(const Plasma::RunnerContext &, const Plasma::QueryMatch &);

private Q_SLOTS:
        void onConnected();
        void onDisconnected();
        void onTextMessageReceived(QString message);

private:
    QWebSocket *m_webSocket;
};

K_EXPORT_PLASMA_RUNNER(mycroft, Mycroft)

#endif