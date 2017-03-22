/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKPlayHistoryRemoveRequest : WLKRequest {

	NSString* _channelID;
	NSString* _bundleID;
	NSString* _externalID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;              //@synthesize externalID=_externalID - In the implementation block
-(NSString *)externalID;
-(NSString *)bundleID;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithBundleID:(id)arg1 externalID:(id)arg2 ;
@end

