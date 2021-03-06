/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSString, NSDate, NSData;

@interface ACFKeychainItemInfo : NSObject <NSCopying> {

	NSMutableDictionary* _attributeDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * attributeDictionary;              //@synthesize attributeDictionary=_attributeDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,retain) id classCode; 
@property (nonatomic,retain) NSString * accessGroup; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSString * description; 
@property (nonatomic,retain) NSString * comment; 
@property (assign,nonatomic) unsigned long long creator; 
@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,retain) NSString * label; 
@property (nonatomic,retain) NSString * subject; 
@property (assign,nonatomic) BOOL isInvisible; 
@property (assign,nonatomic) BOOL isNegative; 
@property (nonatomic,retain) NSString * account; 
@property (nonatomic,retain) NSString * service; 
@property (nonatomic,retain) NSData * generic; 
@property (nonatomic,retain) id valueRef; 
@property (nonatomic,retain) id valueData; 
@property (nonatomic,retain) id valuePersistentRef; 
@property (assign,nonatomic) BOOL isPermanent; 
@property (nonatomic,retain) id keyType; 
@property (nonatomic,retain) NSData * applicationTag; 
@property (nonatomic,copy) NSString * applicationTagString; 
@property (assign,nonatomic) void* accessibleType; 
@property (assign,nonatomic) BOOL synchronizable; 
@property (retain) NSString * genericString; 
@property (assign) BOOL returnData; 
@property (assign) BOOL returnAttributes; 
@property (assign) BOOL returnRef; 
@property (assign) BOOL returnPersistentRef; 
@property (assign) unsigned long long returnLimit; 
+(id)keychainItemInfo;
+(id)keychainItemInfoWithAttributes:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(id)initWithAttributes:(id)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(id)keyType;
-(void)setDescription:(NSString *)arg1 ;
-(BOOL)isNegative;
-(void)setService:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(BOOL)isInvisible;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(id)valueData;
-(void)setValueData:(id)arg1 ;
-(NSString *)service;
-(unsigned long long)creator;
-(NSString *)account;
-(void)dump;
-(void)setAccount:(NSString *)arg1 ;
-(void)setClassCode:(id)arg1 ;
-(void)setValueRef:(id)arg1 ;
-(void)setReturnRef:(BOOL)arg1 ;
-(id)valueRef;
-(void)setAttributeDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)attributeDictionary;
-(BOOL)isSynchronizableAttributeAvaiable;
-(void)setApplicationTag:(NSData *)arg1 ;
-(NSData *)applicationTag;
-(id)classCode;
-(void)setCreator:(unsigned long long)arg1 ;
-(void)setIsInvisible:(BOOL)arg1 ;
-(void)setIsPermanent:(BOOL)arg1 ;
-(BOOL)isPermanent;
-(BOOL)synchronizable;
-(void)setKeyType:(id)arg1 ;
-(void)setApplicationTagString:(NSString *)arg1 ;
-(NSString *)applicationTagString;
-(void)setGenericString:(NSString *)arg1 ;
-(NSString *)genericString;
-(void)setValuePersistentRef:(id)arg1 ;
-(id)valuePersistentRef;
-(void)setReturnData:(BOOL)arg1 ;
-(BOOL)returnData;
-(BOOL)returnAttributes;
-(BOOL)returnRef;
-(void)setReturnPersistentRef:(BOOL)arg1 ;
-(BOOL)returnPersistentRef;
-(unsigned long long)returnLimit;
-(void*)accessibleType;
-(void)setAccessibleType:(void*)arg1 ;
-(void)setReturnLimit:(unsigned long long)arg1 ;
-(void)setReturnAttributes:(BOOL)arg1 ;
-(void)setIsNegative:(BOOL)arg1 ;
-(NSData *)generic;
-(void)setGeneric:(NSData *)arg1 ;
-(void)setSynchronizable:(BOOL)arg1 ;
@end

