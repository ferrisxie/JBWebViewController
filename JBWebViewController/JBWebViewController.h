//
//  JBWebViewController.h
//  JBWebViewController
//
//  Created by Jonas Boserup on 28/10/14.
//  Copyright (c) 2014 Jonas Boserup. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

#import <ARChromeActivity/ARChromeActivity.h>
#import <ARSafariActivity/ARSafariActivity.h>
#import <NJKWebViewProgress/NJKWebViewProgress.h>
#import <NJKWebViewProgress/NJKWebViewProgressView.h>

@interface JBWebViewController : UIViewController <UIWebViewDelegate, NJKWebViewProgressDelegate>

// Blocks for completion
typedef void (^completion)(JBWebViewController *controller);

// Public header methods
- (id)initWithUrl:(NSURL *)url;
- (void)show;
- (void)dismiss;
- (void)reload;
- (void)share;
- (void)setWebTitle:(NSString *)title;
- (void)setWebSubtitle:(NSString *)subtitle;
- (void)showControllerWithCompletion:(completion)completion;
- (void)navigateToURL:(NSURL *)url;
- (void)loadRequest:(NSURLRequest)request;

// Public return methods
- (NSString *)getWebTitle;
- (NSString *)getWebSubtitle;

@end
