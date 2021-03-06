//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class AEAnnotationTheme, AETouchOutsideViewGestureRecognizer, NSString, UIView;

@interface AEAnnotationPopoverViewController : UIViewController <UIGestureRecognizerDelegate>
{
    AETouchOutsideViewGestureRecognizer *mHideOnTouchGestureRecognizer;	// 8 = 0x8
    id <AEAnnotationPopoverViewControllerDelegate> mDelegate;	// 16 = 0x10
    id <AEAnnotation> mAnnotation;	// 24 = 0x18
    AEAnnotationTheme *mTheme;	// 32 = 0x20
    int mPosition;	// 40 = 0x28
    id mObserver;	// 48 = 0x30
    UIView *_presentationView;	// 56 = 0x38
    struct CGRect _presentationRect;	// 64 = 0x40
}

@property(retain, nonatomic) UIView *presentationView; // @synthesize presentationView=_presentationView;
@property(nonatomic) struct CGRect presentationRect; // @synthesize presentationRect=_presentationRect;
@property(nonatomic) int position; // @synthesize position=mPosition;
@property(nonatomic) id <AEAnnotationPopoverViewControllerDelegate> delegate; // @synthesize delegate=mDelegate;
@property(retain, nonatomic) AEAnnotationTheme *theme; // @synthesize theme=mTheme;
@property(retain, nonatomic) id <AEAnnotation> annotation; // @synthesize annotation=mAnnotation;
- (void)hide;	// IMP=0x00000001001d093c
- (void)didHide;	// IMP=0x00000001001d0888
- (void)willHide;	// IMP=0x00000001001d0790
- (void)didShow;	// IMP=0x00000001001d0568
- (void)willShow;	// IMP=0x00000001001d04f4
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000001001d0450
- (void)hideAnimation:(id)arg1 finished:(id)arg2 context:(void *)arg3;	// IMP=0x00000001001d03ec
- (void)presentFromRect:(struct CGRect)arg1 view:(id)arg2;	// IMP=0x00000001001cff28
- (int)willPresentInPosition:(struct CGRect)arg1 view:(id)arg2;	// IMP=0x00000001001cfe04
- (struct CGRect)p_containerFrameForView:(id)arg1;	// IMP=0x00000001001cfdc8
- (_Bool)canPresentInPosition:(int)arg1;	// IMP=0x00000001001cfdbc
- (void)popInAnimation:(id)arg1 finished:(id)arg2 context:(void *)arg3;	// IMP=0x00000001001cfd74
- (void)viewDidUnload;	// IMP=0x00000001001cfd24
- (void)viewDidLoad;	// IMP=0x00000001001cfcfc
- (void)dealloc;	// IMP=0x00000001001cfc84
- (void)releaseOutlets;	// IMP=0x00000001001cfc80
- (id)init;	// IMP=0x00000001001cfc2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

