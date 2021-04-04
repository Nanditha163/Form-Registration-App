#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
   // void on_textEdit_copyAvailable(bool b);

    //void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_label_linkActivated(const QString &link);

    void on_pushButton_clicked();

    void on_label_2_linkActivated(const QString &link);

    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_label_3_linkActivated(const QString &link);

    void on_label_4_linkActivated(const QString &link);

    void on_radioButton_clicked();

    void on_label_5_linkActivated(const QString &link);

    void on_comboBox_activated(int index);

    void on_lineEdit_textEdited(const QString &arg1);

    void on_label_10_linkActivated(const QString &link);

    void on_lineEdit_8_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_8_textChanged(const QString &arg1);

    void on_lineEdit_8_textEdited(const QString &arg1);

    void on_lineEdit_8_returnPressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
