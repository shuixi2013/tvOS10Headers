/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSString;

@interface WLKCanonicalPlayablesRequestOperation : WLKNetworkRequestOperation {

	NSString* _canonicalID;

}

@property (nonatomic,copy,readonly) NSString * canonicalID;              //@synthesize canonicalID=_canonicalID - In the implementation block
-(NSString *)canonicalID;
-(id)responseProcessor;
-(id)initWithCanonicalID:(id)arg1 profiles:(id)arg2 ;
@end

