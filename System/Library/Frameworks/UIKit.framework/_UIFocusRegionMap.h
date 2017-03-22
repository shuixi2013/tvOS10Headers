/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, _UIFocusRegionMapSnapshot;

@interface _UIFocusRegionMap : NSObject {

	UIView* _rootView;
	UIView* _favoredFocusCandidateView;
	_UIFocusRegionMapSnapshot* _lastSnapshot;
	CGRect _minimumSearchArea;

}

@property (nonatomic,retain) _UIFocusRegionMapSnapshot * lastSnapshot;               //@synthesize lastSnapshot=_lastSnapshot - In the implementation block
@property (assign,nonatomic,__weak) UIView * rootView;                               //@synthesize rootView=_rootView - In the implementation block
@property (assign,nonatomic) CGRect minimumSearchArea;                               //@synthesize minimumSearchArea=_minimumSearchArea - In the implementation block
@property (assign,nonatomic,__weak) UIView * favoredFocusCandidateView;              //@synthesize favoredFocusCandidateView=_favoredFocusCandidateView - In the implementation block
-(id)initWithRootView:(id)arg1 ;
-(void)setMinimumSearchArea:(CGRect)arg1 ;
-(void)setFavoredFocusCandidateView:(UIView *)arg1 ;
-(id)nearestCandidateForFocusMovement:(id)arg1 fromView:(id)arg2 ;
-(id)linearlyOrderedCandidatesForFocusMovement:(id)arg1 fromView:(id)arg2 indexForFocusedView:(unsigned long long*)arg3 ;
-(id)nearestCandidateFromRect:(CGRect)arg1 ;
-(id)debugQuickLookObject;
-(BOOL)_containsFocusableRegionForView:(id)arg1 ;
-(void)setLastSnapshot:(_UIFocusRegionMapSnapshot *)arg1 ;
-(_UIFocusRegionMapSnapshot *)lastSnapshot;
-(UIView *)rootView;
-(void)setRootView:(UIView *)arg1 ;
-(CGRect)_viewSearchRectForSnapshotRect:(CGRect)arg1 ;
-(id)_closestFocusableRegionInArray:(id)arg1 toPoint:(CGPoint)arg2 usingHeading:(unsigned long long)arg3 withFocusedView:(id)arg4 consideringFavoredRegion:(BOOL)arg5 includingFocusedView:(BOOL)arg6 ;
-(id)_nearestCandidateForFocusMovement:(id)arg1 fromFocusedView:(id)arg2 withFocusedRect:(CGRect)arg3 includingFocusedView:(BOOL)arg4 ;
-(CGRect)minimumSearchArea;
-(CGPoint)_focusCandidateSearchOriginForFocusedFrame:(CGRect)arg1 heading:(unsigned long long)arg2 minimumSearchArea:(CGRect)arg3 ;
-(CGRect)_focusCandidateSearchRectForFocusedFrame:(CGRect)arg1 heading:(unsigned long long)arg2 minimumSearchArea:(CGRect)arg3 ;
-(CGRect)_viewSearchRectForFocusedFrame:(CGRect)arg1 focusCandidateSearchRect:(CGRect)arg2 includesFocusedFrame:(BOOL)arg3 ;
-(id)linearlyOrderedFocusRegionMapEntriesForFocusMovement:(id)arg1 fromView:(id)arg2 ;
-(UIView *)favoredFocusCandidateView;
-(CGRect)_rectThatJustBarelyIntersectsRect:(CGRect)arg1 startingRect:(CGRect)arg2 ;
-(id)inferredPreferredFocusedSubviewForView:(id)arg1 ;
-(id)_closestFocusableRegionInArray:(id)arg1 toPoint:(CGPoint)arg2 usingHeading:(unsigned long long)arg3 ;
@end

