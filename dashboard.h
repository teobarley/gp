#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>

namespace Ui {
class Dashboard;
}

class Dashboard : public QMainWindow {
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = 0);
    ~Dashboard();

private slots:
    void on_btn_close_clicked();
    void on_comboBox_currentIndexChanged(int index);
    void on_btn_test_clicked();

private:
    Ui::Dashboard *ui;
    void set_Index();
    void set_Data_1();
    void set_Data_2();
};

#endif // DASHBOARD_H
