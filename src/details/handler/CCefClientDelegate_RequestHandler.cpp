#include "details/CCefClientDelegate.h"

#include "details/QCefViewPrivate.h"

bool
CCefClientDelegate::OnBeforeBrowse(CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request,
    bool user_gesture,
    bool is_redirect)
{
  pCefViewPrivate_->OnBeforeBrowse(browser, frame, request, user_gesture, is_redirect);
  return false;
}
