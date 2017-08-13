//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

@interface TVSettingsTCCFacade : NSObject
{
    NSArray *_infoArray;	// 8 = 0x8
    NSString *_serviceName;	// 16 = 0x10
    NSMutableDictionary *_infoByIdentifier;	// 24 = 0x18
}

@property(readonly, nonatomic) NSMutableDictionary *infoByIdentifier; // @synthesize infoByIdentifier=_infoByIdentifier;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) NSArray *infoArray; // @synthesize infoArray=_infoArray;
- (void).cxx_destruct;	// IMP=0x000000010006b870
- (void)_updateTCCInfo;	// IMP=0x000000010006b400
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x000000010006b3f4
- (_Bool)setAllowAccess:(_Bool)arg1 forInfo:(id)arg2;	// IMP=0x000000010006b3a4
- (id)infoForIdentifier:(id)arg1;	// IMP=0x000000010006b38c
- (void)dealloc;	// IMP=0x000000010006b2cc
- (id)initWithServiceName:(id)arg1;	// IMP=0x000000010006b140
- (id)init;	// IMP=0x000000010006b128

@end
