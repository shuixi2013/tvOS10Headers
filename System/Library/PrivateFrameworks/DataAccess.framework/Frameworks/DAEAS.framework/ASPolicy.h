/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASPolicy : ASItem {

	NSString* _type;
	NSString* _key;
	NSString* _status;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)_setKey:(id)arg1 ;
-(id)description;
-(id)key;
-(id)type;
-(void)_setType:(id)arg1 ;
-(int)status;
-(id)perDomainDictsForPolicy;
-(void)_setStatus:(id)arg1 ;
@end

