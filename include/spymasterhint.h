#ifndef SPYMASTERHINT_H
#define SPYMASTERHINT_H

#include <QWidget>
#include <QLineEdit>
#include <QSpinBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QRegularExpressionValidator>

class SpymasterHint : public QWidget {
  Q_OBJECT

 public:
  explicit SpymasterHint(QWidget* parent = nullptr);
  ~SpymasterHint();

  void reset();

 signals:
  void hintSubmitted(const QString& hint, const int number);

 private slots:
  void submitHint();
  void updateButtonClickable();
  void textToUppercase(const QString& text);

 private:
  QLineEdit* hintLineEdit;
  QSpinBox* numberSpinBox;
  QPushButton* giveClueButton;
  QRegularExpressionValidator* textValidator;
};


#endif // SPYMASTERHINT_H
