/*
CoreArchiver for create and extract archives

CoreArchiver is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; version 2
of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, see {http://www.gnu.org/licenses/}. */

#ifndef COREARCHIVER_H
#define COREARCHIVER_H

#include <QWidget>
#include <QFileDialog>
#include <QtConcurrent>

#include "libarchiveqt.h"
#include "utilities.h"


namespace Ui {
class corearchiver;
}

class corearchiver : public QWidget
{
    Q_OBJECT

public:
    explicit corearchiver(QWidget *parent = nullptr);
    ~corearchiver();

    void sendFiles(const QStringList &paths, bool archive);

    void compress(const QStringList &filePathList, const QDir &currentDir);
    void extract(const QString &archiveFilePath, const QDir &dest);
    void setFilename(const QString &fileName);
    void setFolderPath(const QString &path);

    QString archiveName, location, format, workingDir;
    QStringList filePathList;

private Q_SLOTS:
    void updateFileName(const QString & );
    void updateDirName();
    void updateFormat(const QString & );

private:
    Ui::corearchiver *ui;
    void startsetup();

};

#endif // COREARCHIVER_H
