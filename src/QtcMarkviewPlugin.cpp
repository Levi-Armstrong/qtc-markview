#include "QtcMarkviewPlugin.h"
#include "Constants.h"

#include <QtPlugin>

using namespace QtcMarkview::Internal;

QtcMarkviewPlugin::QtcMarkviewPlugin () :
  IPlugin () {
  // Create your members
}

QtcMarkviewPlugin::~QtcMarkviewPlugin () {
  // Unregister objects from the plugin manager's object pool
  // Delete members
}

bool QtcMarkviewPlugin::initialize (const QStringList &arguments, QString *errorString) {
  // Register objects in the plugin manager's object pool
  // Load settings
  // Add actions to menus
  // Connect to other plugins' signals
  // In the initialize function, a plugin can be sure that the plugins it
  // depends on have initialized their members.

  Q_UNUSED (arguments)
  Q_UNUSED (errorString)

  return true;
}

void QtcMarkviewPlugin::extensionsInitialized () {
  // Retrieve objects from the plugin manager's object pool
  // In the extensionsInitialized function, a plugin can be sure that all
  // plugins that depend on it are completely initialized.
}

ExtensionSystem::IPlugin::ShutdownFlag QtcMarkviewPlugin::aboutToShutdown () {
  // Save settings
  // Disconnect from signals that are not needed during shutdown
  // Hide UI (if you add UI that is not in the main window directly)
  return SynchronousShutdown;
}
