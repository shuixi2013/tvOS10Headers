/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSArray, WLKBasicContentMetadata;

@interface WLKBasicContentRequestOperation : WLKNetworkRequestOperation {

	NSArray* _contentIDs;

}

@property (nonatomic,copy,readonly) NSArray * contentIDs;                                   //@synthesize contentIDs=_contentIDs - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * basicContentMetadata; 
-(id)responseProcessor;
-(id)initWithContentIDs:(id)arg1 ;
-(id)initWithContentID:(id)arg1 ;
-(WLKBasicContentMetadata *)basicContentMetadata;
-(NSArray *)contentIDs;
@end

