/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSimpleCString.h>

@interface NSConstantString : NSSimpleCString
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(BOOL)canBeConvertedToEncoding:(unsigned long long)arg1 ;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)cStringLength;
-(const char*)cString;
-(const char*)lossyCString;
-(void)dealloc;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copy;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isDeallocating;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(BOOL)_tryRetain;
@end

