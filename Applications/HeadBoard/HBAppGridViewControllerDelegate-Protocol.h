//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HBAppGridViewController, HBRootItem;

@protocol HBAppGridViewControllerDelegate <NSObject>

@optional
- (void)gridViewControllerEditingStateChanged:(HBAppGridViewController *)arg1;
- (void)gridViewControllerItemsBecameReady:(HBAppGridViewController *)arg1;
- (void)gridViewControllerDidScrollCloseEnoughToTop:(HBAppGridViewController *)arg1;
- (void)gridViewControllerDidEndDecelerating:(HBAppGridViewController *)arg1;
- (void)gridViewController:(HBAppGridViewController *)arg1 itemMovedOutOfDock:(HBRootItem *)arg2 replacedWithItem:(HBRootItem *)arg3;
- (void)gridViewController:(HBAppGridViewController *)arg1 itemMovedIntoDock:(HBRootItem *)arg2;
- (void)gridViewController:(HBAppGridViewController *)arg1 willUnfocusOnItemInDock:(HBRootItem *)arg2 inDirection:(long long)arg3;
- (void)gridViewController:(HBAppGridViewController *)arg1 didFocusOnItemInDock:(HBRootItem *)arg2 inDirection:(long long)arg3;
- (void)gridViewController:(HBAppGridViewController *)arg1 didFocusOnItem:(HBRootItem *)arg2 inDirection:(long long)arg3;
@end

