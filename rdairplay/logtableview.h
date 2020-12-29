//   logtableview.h
//
//   The Log TableView widget for RDAirPlay
//
//   (C) Copyright 2002-2020 Fred Gleason <fredg@paravelsystems.com>
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License version 2 as
//   published by the Free Software Foundation.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public
//   License along with this program; if not, write to the Free Software
//   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//
//

#ifndef LOGTABLEVIEW_H
#define LOGTABLEVIEW_H

#include <QDropEvent>
#include <QDragEnterEvent>
#include <QTableView>

#include <rdlog_line.h>

class LogTableView : public QTableView
{
  Q_OBJECT
 public:
  LogTableView(QWidget *parent);

 signals:
  void cartDropped(int line,RDLogLine *ll);

 protected:
  void dragEnterEvent(QDragEnterEvent *e);
  void dragMoveEvent(QDragMoveEvent *e);
  void dropEvent(QDropEvent *e);
};


#endif  // LOGTABLEVIEW_H
