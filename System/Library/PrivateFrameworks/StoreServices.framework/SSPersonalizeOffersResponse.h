/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSMutableDictionary, NSArray, NSString;

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding> {

	NSMutableDictionary* _actionDisplayNames;
	NSMutableDictionary* _actionParameters;
	NSArray* _items;
	NSMutableDictionary* _priceDisplayNames;

}

@property (nonatomic,readonly) NSArray * personalizedItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)actionParametersForItemIdentifier:(id)arg1 ;
-(id)priceDisplayForItemType:(id)arg1 ;
-(id)actionDisplayNameForItemType:(id)arg1 ;
-(void)_setPersonalizedItems:(id)arg1 ;
-(NSArray *)personalizedItems;
-(void)setActionDisplayNameString:(id)arg1 forItemType:(id)arg2 ;
-(void)setActionParameters:(id)arg1 forItemIdentifier:(id)arg2 ;
-(void)setPriceDisplayString:(id)arg1 forItemType:(id)arg2 ;
-(void)dealloc;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
@end

