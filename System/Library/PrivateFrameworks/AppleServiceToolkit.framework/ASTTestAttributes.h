/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSDictionary;

@interface ASTTestAttributes : NSObject {

	NSNumber* _testId;
	NSString* _version;

}

@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,retain) NSNumber * testId;                        //@synthesize testId=_testId - In the implementation block
@property (nonatomic,retain) NSString * version;                       //@synthesize version=_version - In the implementation block
+(id)attributesWithTestId:(id)arg1 version:(id)arg2 ;
-(id)init;
-(id)description;
-(NSDictionary *)dictionary;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(NSNumber *)testId;
-(id)initWithTestId:(id)arg1 version:(id)arg2 ;
-(void)setTestId:(NSNumber *)arg1 ;
@end
