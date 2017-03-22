/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDObject.h>

@interface ASDControl : ASDObject {

	unsigned _controlElement;
	unsigned _controlScope;

}

@property (assign,nonatomic) unsigned controlElement;              //@synthesize controlElement=_controlElement - In the implementation block
@property (assign,nonatomic) unsigned controlScope;                //@synthesize controlScope=_controlScope - In the implementation block
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(unsigned)controlScope;
-(unsigned)controlElement;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(BOOL)isKindOfAudioClass:(unsigned)arg1 ;
-(void)setControlElement:(unsigned)arg1 ;
-(void)setControlScope:(unsigned)arg1 ;
-(id)initWithPlugin:(id)arg1 ;
@end

