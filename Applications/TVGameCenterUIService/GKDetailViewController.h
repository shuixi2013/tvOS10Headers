//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardCollectionViewController.h"

@class GKHorizontalBubbleControlsView;

@interface GKDetailViewController : GKDashboardCollectionViewController
{
    GKHorizontalBubbleControlsView *_bubbleView;	// 8 = 0x8
}

@property(nonatomic) GKHorizontalBubbleControlsView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void)shareScore:(id)arg1 fromLeaderboard:(id)arg2 sendingView:(id)arg3;	// IMP=0x0000000100028db8
- (void)shareAchievement:(id)arg1 sendingView:(id)arg2;	// IMP=0x0000000100028d18
- (_Bool)canShare;	// IMP=0x0000000100028ce4
- (void)pushBubble:(id)arg1;	// IMP=0x0000000100028b68
- (void)floatInBubbles;	// IMP=0x0000000100028898
- (void)hideBubbles;	// IMP=0x000000010002877c
- (id)addBubbleWithType:(long long)arg1 useLargeSize:(_Bool)arg2 title:(id)arg3 target:(id)arg4 action:(SEL)arg5;	// IMP=0x000000010002857c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010002852c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100028480
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100028430
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100028374
- (void)viewDidLoad;	// IMP=0x0000000100028340
@property(readonly, nonatomic) _Bool wantsBubbles;

@end
