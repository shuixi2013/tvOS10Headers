/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface CalDescriptionBuilder : NSObject {

	NSMutableDictionary* _descriptionUnderConstruction;
	NSString* _superclassDescription;
	BOOL _sortedByKey;
	NSString* _keyDelimiter;

}

@property (nonatomic,retain) NSMutableDictionary * descriptionUnderConstruction;              //@synthesize descriptionUnderConstruction=_descriptionUnderConstruction - In the implementation block
@property (assign,nonatomic) BOOL sortedByKey;                                                //@synthesize sortedByKey=_sortedByKey - In the implementation block
@property (nonatomic,copy) NSString * superclassDescription;                                  //@synthesize superclassDescription=_superclassDescription - In the implementation block
@property (nonatomic,copy) NSString * keyDelimiter;                                           //@synthesize keyDelimiter=_keyDelimiter - In the implementation block
-(id)init;
-(id)description;
-(id)build;
-(void)setKey:(id)arg1 withInt:(int)arg2 ;
-(void)setKey:(id)arg1 withSet:(id)arg2 ;
-(void)setKey:(id)arg1 withDispatchQueue:(id)arg2 ;
-(void)setKey:(id)arg1 withDispatchSource:(id)arg2 ;
-(void)setKey:(id)arg1 withUnsignedLongLong:(unsigned long long)arg2 ;
-(void)setKey:(id)arg1 withProcessID:(int)arg2 ;
-(void)setKey:(id)arg1 withMachPort:(unsigned)arg2 ;
-(NSMutableDictionary *)descriptionUnderConstruction;
-(BOOL)sortedByKey;
-(NSString *)keyDelimiter;
-(NSString *)superclassDescription;
-(void)setKey:(id)arg1 withCharArray:(const char*)arg2 ;
-(void)setKey:(id)arg1 withUnsignedInt:(unsigned)arg2 ;
-(void)setKey:(id)arg1 withDouble:(double)arg2 ;
-(void)setKey:(id)arg1 withChar:(char)arg2 ;
-(void)setKey:(id)arg1 withFloat:(float)arg2 ;
-(void)setKey:(id)arg1 withInteger:(long long)arg2 ;
-(void)setKey:(id)arg1 withLong:(long long)arg2 ;
-(void)setKey:(id)arg1 withLongLong:(long long)arg2 ;
-(void)setKey:(id)arg1 withShort:(short)arg2 ;
-(void)setKey:(id)arg1 withUnsignedChar:(unsigned char)arg2 ;
-(void)setKey:(id)arg1 withUnsignedInteger:(unsigned long long)arg2 ;
-(void)setKey:(id)arg1 withUnsignedLong:(unsigned long long)arg2 ;
-(void)setKey:(id)arg1 withUnsignedShort:(unsigned short)arg2 ;
-(void)setKey:(id)arg1 withClass:(Class)arg2 ;
-(void)setKey:(id)arg1 withSelector:(SEL)arg2 ;
-(void)setKey:(id)arg1 withSize:(unsigned long long)arg2 ;
-(void)setDescriptionUnderConstruction:(NSMutableDictionary *)arg1 ;
-(void)setSuperclassDescription:(NSString *)arg1 ;
-(void)setSortedByKey:(BOOL)arg1 ;
-(void)setKeyDelimiter:(NSString *)arg1 ;
-(id)initWithSuperclassDescription:(id)arg1 ;
-(void)setKey:(id)arg1 withString:(id)arg2 ;
-(void)setKey:(id)arg1 withBoolean:(BOOL)arg2 ;
-(void)setKey:(id)arg1 withDictionary:(id)arg2 ;
-(void)setKey:(id)arg1 withArray:(id)arg2 ;
-(void)setKey:(id)arg1 withEnumNumericalValue:(long long)arg2 andStringValue:(id)arg3 ;
-(void)setKey:(id)arg1 withDate:(id)arg2 ;
-(void)setKey:(id)arg1 withTimeInterval:(double)arg2 ;
-(void)setKey:(id)arg1 withObject:(id)arg2 ;
-(void)setKey:(id)arg1 withPointerAddress:(const void*)arg2 ;
@end

