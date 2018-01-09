// For license of this file, see <project-root-folder>/LICENSE.md.

#include <QDockWidget>

#ifndef DOCKWIDGET_H
#define DOCKWIDGET_H

class DockWidget : public QDockWidget {
  Q_OBJECT

  public:
    explicit DockWidget(QWidget* parent = nullptr);
    virtual ~DockWidget() = default;

    virtual Qt::DockWidgetArea initialArea() const = 0;
    virtual bool initiallyVisible() const = 0;
    virtual int initialWidth() const = 0;

  public slots:
    virtual void load() = 0;

  protected:
    virtual void showEvent(QShowEvent* event) override;
};

#endif // DOCKWIDGET_H