/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString, ASItemOperationsFetchAttachmentProperties;

@interface ASItemOperationsFetchAttachmentFetchResult : ASItem {

	NSNumber* _status;
	NSString* _fileReference;
	ASItemOperationsFetchAttachmentProperties* _properties;

}

@property (nonatomic,retain) NSNumber * status;                                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * fileReference;                                            //@synthesize fileReference=_fileReference - In the implementation block
@property (nonatomic,retain) ASItemOperationsFetchAttachmentProperties * properties;              //@synthesize properties=_properties - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setProperties:(ASItemOperationsFetchAttachmentProperties *)arg1 ;
-(ASItemOperationsFetchAttachmentProperties *)properties;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)setFileReference:(NSString *)arg1 ;
-(NSString *)fileReference;
@end

