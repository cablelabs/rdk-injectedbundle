#include "BundleController.h"
#include "AVESupport.h"

#include <WebKit/WKBundleInitialize.h>

extern "C" void WKBundleInitialize(WKBundleRef bundle, WKTypeRef initializationUserData)
{
    JSBridge::initialize(bundle, initializationUserData);
    AVESupport::initialize();
}
