//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSFetchedResultsController, NSIndexPath;

@interface MTSpecialIndexPathTableViewController : UITableViewController
{
    NSFetchedResultsController *_frc;	// 8 = 0x8
    NSIndexPath *_specialPath;	// 16 = 0x10
    CDUnknownBlockType _cellFor_specialPathBlock;	// 24 = 0x18
    CDUnknownBlockType _didSelect_specialPathBlock;	// 32 = 0x20
    double _heightForSpecialPath;	// 40 = 0x28
}

@property(nonatomic) double heightForSpecialPath; // @synthesize heightForSpecialPath=_heightForSpecialPath;
@property(copy, nonatomic) CDUnknownBlockType didSelect_specialPathBlock; // @synthesize didSelect_specialPathBlock=_didSelect_specialPathBlock;
@property(copy, nonatomic) CDUnknownBlockType cellFor_specialPathBlock; // @synthesize cellFor_specialPathBlock=_cellFor_specialPathBlock;
@property(retain, nonatomic) NSIndexPath *specialPath; // @synthesize specialPath=_specialPath;
@property(retain, nonatomic) NSFetchedResultsController *frc; // @synthesize frc=_frc;
- (void).cxx_destruct;	// IMP=0x0000000100025774
- (void)main_configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;	// IMP=0x0000000100025688
- (_Bool)main_tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x0000000100025680
- (void)main_tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010002567c
- (double)main_tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100025674
- (id)main_tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010002566c
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100025598
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x00000001000254b0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000253b0
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100025340
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100025240
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010002512c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100025090
- (id)offsetIndexPath:(id)arg1;	// IMP=0x0000000100025010
- (id)translateIndexPath:(id)arg1;	// IMP=0x0000000100024f90

@end

