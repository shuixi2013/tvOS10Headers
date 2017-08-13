//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADWebView.h"

@class ADSAdImpression, ADSWebViewGestureRecognizer;

@interface ADSCreativeView : ADWebView
{
    id <ADSCreativeViewNavigationActionDelegate> _navigationActionDelegate;	// 16 = 0x10
    _Bool _detachedFromContainerView;	// 24 = 0x18
    _Bool _shouldBlockNavigation;	// 25 = 0x19
    ADSAdImpression *_adImpression;	// 32 = 0x20
    ADSWebViewGestureRecognizer *_gestureRecognizer;	// 40 = 0x28
}

@property(retain, nonatomic) ADSWebViewGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, nonatomic) _Bool shouldBlockNavigation; // @synthesize shouldBlockNavigation=_shouldBlockNavigation;
@property(nonatomic) _Bool detachedFromContainerView; // @synthesize detachedFromContainerView=_detachedFromContainerView;
@property(retain, nonatomic) ADSAdImpression *adImpression; // @synthesize adImpression=_adImpression;
- (void)_decidePolicyForDFPCreativeWebView:(id)arg1 NavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x0000000100020bf8
- (void)_decidePolicyForiAdCreativeWebView:(id)arg1 NavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x0000000100020a18
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x0000000100020990
@property(nonatomic) __weak id <ADSCreativeViewNavigationActionDelegate> navigationActionDelegate;
- (void)_tapRecognized:(id)arg1;	// IMP=0x0000000100020934
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100020890
- (void)dealloc;	// IMP=0x0000000100020808

@end
