//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "UITableViewDataSource.h"

@class MTTableView, NSIndexPath, UIView;

@protocol MTTableViewDataSource <UITableViewDataSource, NSObject>

@optional
- (UIView *)tableView:(MTTableView *)arg1 popoverDetailViewForRowAtIndexPath:(NSIndexPath *)arg2;
@end

