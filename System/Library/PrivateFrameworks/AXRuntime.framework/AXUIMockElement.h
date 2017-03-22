/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <AXRuntime/AXUIElement.h>

@class NSMutableDictionary;

@interface AXUIMockElement : AXUIElement {

	NSMutableDictionary* _attributes;
	NSMutableDictionary* _writableAttributes;
	NSMutableDictionary* _performActionLog;
	BOOL _usesCarriageReturnAsLinesSeparator;

}

@property (assign,nonatomic) BOOL usesCarriageReturnAsLinesSeparator;              //@synthesize usesCarriageReturnAsLinesSeparator=_usesCarriageReturnAsLinesSeparator - In the implementation block
+(void)applyElementAttributeCacheScheme:(int)arg1 ;
+(id)uiElementAtCoordinate:(CGPoint)arg1 ;
+(id)uiElementAtCoordinate:(CGPoint)arg1 hitTestOrientation:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(id)stringWithAXAttribute:(int)arg1 ;
-(CGRect)rectWithAXAttribute:(int)arg1 ;
-(id)numberWithAXAttribute:(int)arg1 ;
-(CGPoint)pointWithAXAttribute:(int)arg1 ;
-(id)_valueForAttribute:(int)arg1 ;
-(BOOL)usesCarriageReturnAsLinesSeparator;
-(NSRange)rangeWithAXAttribute:(int)arg1 ;
-(id)objectWithAXAttribute:(int)arg1 parameter:(void*)arg2 ;
-(id)objectWithAXAttribute:(int)arg1 ;
-(unsigned long long)_lineNumberForPoint:(CGPoint)arg1 ;
-(void)setValue:(id)arg1 forAXAttribute:(int)arg2 ;
-(BOOL)isMockElement;
-(AXUIElementRef)axElement;
-(id)visibleElements;
-(id)performBlockWhileLoggingPerformedActions:(/*^block*/id)arg1 ;
-(void)enableCache:(BOOL)arg1 ;
-(void)disableCache;
-(void)setWritable:(BOOL)arg1 forAXAttribute:(int)arg2 ;
-(BOOL)canSetAXAttribute:(int)arg1 ;
-(id)uiElementWithAXAttribute:(int)arg1 ;
-(BOOL)canPerformAXAction:(int)arg1 ;
-(id)arrayWithAXAttribute:(int)arg1 ;
-(BOOL)boolWithAXAttribute:(int)arg1 ;
-(float)floatWithAXAttribute:(int)arg1 ;
-(long long)longWithAXAttribute:(int)arg1 ;
-(CGSize)sizeWithAXAttribute:(int)arg1 ;
-(CGPathRef)pathWithAXAttribute:(int)arg1 ;
-(id)urlWithAXAttribute:(int)arg1 ;
-(id)uiElementArrayForAXAttribute:(int)arg1 ;
-(unsigned long long)arrayCountWithAXAttribute:(int)arg1 ;
-(void)fillStaticCache;
-(id)uiElementsWithAttribute:(int)arg1 ;
-(id)uiElementsWithAttribute:(int)arg1 parameter:(void*)arg2 ;
-(BOOL)performAXAction:(int)arg1 ;
-(BOOL)performAXAction:(int)arg1 withValue:(id)arg2 ;
-(id)previousElementsWithCount:(unsigned long long)arg1 ;
-(id)nextElementsWithCount:(unsigned long long)arg1 ;
-(id)uiElementsWithAttribute:(int)arg1 parameter:(void*)arg2 fetchAttributes:(BOOL)arg3 ;
-(BOOL)isValidForApplication:(id)arg1 ;
-(void)updateCacheWithAttributes:(id)arg1 ;
-(void)updateCache:(int)arg1 ;
-(void)setAXAttribute:(int)arg1 withBOOL:(BOOL)arg2 ;
-(void)setAXAttribute:(int)arg1 withString:(id)arg2 ;
-(void)setAXAttribute:(int)arg1 withLong:(long long)arg2 ;
-(void)setAXAttribute:(int)arg1 withFloat:(float)arg2 ;
-(void)setAXAttribute:(int)arg1 withNumber:(id)arg2 ;
-(void)setAXAttribute:(int)arg1 withPoint:(CGPoint)arg2 ;
-(void)setAXAttribute:(int)arg1 withSize:(CGSize)arg2 ;
-(void)setAXAttribute:(int)arg1 withRange:(NSRange)arg2 ;
-(void)setAXAttribute:(int)arg1 withUIElement:(id)arg2 ;
-(void)setAXAttribute:(int)arg1 withUIElementArray:(id)arg2 ;
-(void)setAXAttribute:(int)arg1 withArray:(id)arg2 ;
-(void)setAXAttribute:(int)arg1 withObject:(id)arg2 ;
-(void)setAXAttribute:(int)arg1 withObject:(id)arg2 synchronous:(BOOL)arg3 ;
-(CGPoint)pointForLineNumber:(unsigned long long)arg1 ;
-(void)setUsesCarriageReturnAsLinesSeparator:(BOOL)arg1 ;
-(int)pid;
@end
