/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBTree.h>

@class NSMutableDictionary, NSArray;

@interface UIKBTree_Compile : UIKBTree {

	NSMutableDictionary* symbols;
	NSMutableDictionary* refs;

}

@property (nonatomic,retain) NSMutableDictionary * symbols; 
@property (nonatomic,retain) NSMutableDictionary * refs; 
@property (nonatomic,readonly) NSArray * refList; 
@property (assign,nonatomic) BOOL variable; 
+(id)treeOfType:(int)arg1 ;
+(id)uniqueNameWithType:(int)arg1 ;
+(id)stringEnumForType:(int)arg1 ;
+(int)typeForString:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(int)arg1 ;
-(BOOL)variable;
-(BOOL)isSameAsTree:(id)arg1 ;
-(BOOL)_needsScaling;
-(id)geometrySet:(BOOL)arg1 ;
-(id)attributeSet:(BOOL)arg1 ;
-(void)setSymbols:(NSMutableDictionary *)arg1 ;
-(void)setRefs:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)symbols;
-(NSMutableDictionary *)refs;
-(void)setVariable:(BOOL)arg1 ;
-(void)mergePropertiesWithOthers:(id)arg1 ;
-(BOOL)usesSymbols;
-(id)symbolValues:(id)arg1 withSymbols:(id)arg2 ;
-(int)symbolHash:(id)arg1 ;
-(int)shapeHash;
-(id)simpleName;
-(void)uniquifyName;
-(id)listAtIndex:(int)arg1 ;
-(void)setTarget:(id)arg1 forReference:(id)arg2 ;
-(int)indexOfSubtreeWithType:(int)arg1 ;
-(int)indexOfSubtreeWithName:(id)arg1 rows:(id)arg2 ;
-(void)mergeSubtreesWithOthers:(id)arg1 ;
-(void)mergeSymbolsWithOthers:(id)arg1 ;
-(void)mergePropertiesWithSubtreeRange:(NSRange)arg1 properties:(id)arg2 ;
-(int)subtreeHash;
-(void)setGeometrySet:(id)arg1 ;
-(void)setAttributeSet:(id)arg1 ;
-(NSArray *)refList;
@end

