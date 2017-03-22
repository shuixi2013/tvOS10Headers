/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVSemanticContextServices.framework/TVSemanticContextServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface TVSCSemanticObject : NSObject {

	NSString* _type;
	NSMutableDictionary* _metadata;

}

@property (nonatomic,copy) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)initWithType:(id)arg1 ;
-(NSMutableDictionary *)metadata;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(id)linkedDataDictionary;
-(void)setMetadata:(id)arg1 forProperty:(id)arg2 ;
-(id)metadataForProperty:(id)arg1 ;
-(void)removeMetadataForProperty:(id)arg1 ;
@end

