/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSArray;

@interface SSVRedeemCodeMetadata : NSObject <NSCopying> {

	NSDictionary* _dictionary;
	NSString* _inputCode;

}

@property (nonatomic,readonly) NSDictionary * redeemCodeDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * code; 
@property (nonatomic,readonly) NSString * codeType; 
@property (nonatomic,copy) NSString * inputCode;                                 //@synthesize inputCode=_inputCode - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
-(id)initWithRedeemCodeDictionary:(id)arg1 ;
-(NSString *)codeType;
-(NSString *)inputCode;
-(void)setInputCode:(NSString *)arg1 ;
-(NSDictionary *)redeemCodeDictionary;
-(NSString *)code;
-(NSArray *)items;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
