//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseProcessor.h"

@interface MTFeedUpdateProcessor : MTBaseProcessor
{
}

- (void)_lpmDidChange;	// IMP=0x00000001000e556c
- (void)_reCheck;	// IMP=0x00000001000e5420
- (_Bool)_isLPMEnabled;	// IMP=0x00000001000e53cc
- (void)checkAutoDownloadsForUuids:(id)arg1;	// IMP=0x00000001000e533c
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x00000001000e532c
- (id)entityName;	// IMP=0x00000001000e531c
- (id)predicate;	// IMP=0x00000001000e528c
- (double)updatePredicateDuration;	// IMP=0x00000001000e5280
- (void)dealloc;	// IMP=0x00000001000e5204
- (void)start;	// IMP=0x00000001000e5174

@end
