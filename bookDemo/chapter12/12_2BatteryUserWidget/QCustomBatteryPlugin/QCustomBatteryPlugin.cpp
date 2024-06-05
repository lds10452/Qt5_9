#include "QCustomBattery.h"
#include "QCustomBatteryPlugin.h"

#include <QtPlugin>

QCustomBatteryPlugin::QCustomBatteryPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QCustomBatteryPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool QCustomBatteryPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QCustomBatteryPlugin::createWidget(QWidget *parent)
{
    return new QCustomBattery(parent);
}

QString QCustomBatteryPlugin::name() const
{
    return QLatin1String("QCustomBattery");
}

QString QCustomBatteryPlugin::group() const
{
    return QLatin1String("Custom Widgets");
}

QIcon QCustomBatteryPlugin::icon() const
{
    return QIcon(QLatin1String(":/44.ico"));
}

QString QCustomBatteryPlugin::toolTip() const
{
    return QLatin1String("this is a battery");
}

QString QCustomBatteryPlugin::whatsThis() const
{
    return QLatin1String("this is custom widget");
}

bool QCustomBatteryPlugin::isContainer() const
{
    return false;
}

QString QCustomBatteryPlugin::domXml() const
{
    return QLatin1String("<widget class=\"QCustomBattery\" name=\"qCustomBattery\">\n</widget>\n");
}

QString QCustomBatteryPlugin::includeFile() const
{
    return QLatin1String("QCustomBattery.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(qcustombatteryplugin, QCustomBatteryPlugin)
#endif // QT_VERSION < 0x050000
