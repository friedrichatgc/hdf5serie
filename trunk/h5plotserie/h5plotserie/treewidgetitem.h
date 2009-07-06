/*
    h5plotserie - plot the data of a hdf5 file.
    Copyright (C) 2009 Martin Förg

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef TREEWIDGETITEM_H
#define TREEWIDGETITEM_H

#include <QTreeWidgetItem>

class TreeWidgetItem : public QTreeWidgetItem {

  //Q_OBJECT

  private:
    std::string path;
    QStringList list;
  public:
    TreeWidgetItem ( const QStringList & strings) : QTreeWidgetItem(strings) {}
    void setPath(std::string p) {path = p;}
    void setStringList(QStringList &list_) {list = list_;}
    QStringList& getStringList() {return list;}
    const std::string& getPath() const {return path;}
    std::string& getPath() {return path;}
};


#endif
