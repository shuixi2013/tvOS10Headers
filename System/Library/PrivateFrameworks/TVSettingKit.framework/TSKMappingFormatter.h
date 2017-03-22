/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSArray, NSDictionary;

@interface TSKMappingFormatter : NSFormatter {

	NSArray* _inputs;
	NSDictionary* _mapping;

}

@property (nonatomic,copy) NSDictionary * mapping;                 //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,copy,readonly) NSArray * inputs;              //@synthesize inputs=_inputs - In the implementation block
-(id)stringForObjectValue:(id)arg1 ;
-(NSArray *)inputs;
-(NSDictionary *)mapping;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)setMapping:(NSDictionary *)arg1 ;
-(id)initWithInputs:(id)arg1 outputs:(id)arg2 ;
@end

