/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol HMObjectMerge <NSObject>
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@optional
-(void)mergeWithNewObjectNoMergeCount:(id)arg1;

@required
-(NSUUID *)uniqueIdentifier;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;

@end

