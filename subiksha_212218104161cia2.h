#ifndef SUBIKSHA_212218104161CIA2_H
#define SUBIKSHA_212218104161CIA2_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class subiksha_212218104161cia2; }
QT_END_NAMESPACE

class subiksha_212218104161cia2 : public QMainWindow
{
    Q_OBJECT

public:
    subiksha_212218104161cia2(QWidget *parent = nullptr);
    ~subiksha_212218104161cia2();

private slots:
    void on_pushButton_toggled(bool checked);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::subiksha_212218104161cia2 *ui;
};
#endif // SUBIKSHA_212218104161CIA2_H
