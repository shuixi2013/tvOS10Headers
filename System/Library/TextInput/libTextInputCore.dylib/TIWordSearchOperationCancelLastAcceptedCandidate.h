/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationCancelLastAcceptedCandidate : TIWordSearchOperation {

	TIMecabraWrapper* _mecabraWrapper;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;              //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)perform;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(id)initWithWordSearch:(id)arg1 ;
@end

