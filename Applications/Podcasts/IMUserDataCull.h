//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMUserDataCull : NSObject
{
}

+ (_Bool)isTimestampNewerThanMaxDeletedAge:(unsigned long long)arg1;	// IMP=0x00000001001fe9e0
+ (_Bool)isTimestamp:(unsigned long long)arg1 newerThanMaxAgeFromRightNow:(unsigned long long)arg2;	// IMP=0x00000001001fe99c
+ (_Bool)isTimestampTrustworthy:(unsigned long long)arg1;	// IMP=0x00000001001fe97c
+ (unsigned long long)maxDeletedAge;	// IMP=0x00000001001fe970

@end

