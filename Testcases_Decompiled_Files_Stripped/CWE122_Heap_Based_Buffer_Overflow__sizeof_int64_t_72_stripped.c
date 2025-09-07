
long FUN_00102c00(long param_1)

{
  return param_1 + 8;
}




void FUN_00102c65(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f6e(param_1,param_2);
  return;
}




void FUN_0010173b(void)

{
  long in_FS_OFFSET;
  undefined8 *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019a8(local_58);
  local_68 = (undefined8 *)0x0;
  local_68 = (undefined8 *)malloc(8);
  if (local_68 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 0x7ffffffb;
  local_60 = FUN_00101aae(local_58);
  FUN_00101afe(local_38,&local_60);
                    /* try { // try from 001017d1 to 00101866 has its CatchHandler @ 001018b2 */
  FUN_00101b2c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101aae(local_58);
  FUN_00101afe(local_38,&local_60);
  FUN_00101b2c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101aae(local_58);
  FUN_00101afe(local_38,&local_60);
  FUN_00101b2c(local_58,local_38[0],1,&local_68);
  FUN_00101bf2(local_38,local_58);
                    /* try { // try from 0010186e to 00101872 has its CatchHandler @ 0010189d */
  FUN_0010152f(local_38);
  FUN_00101a66(local_38);
  FUN_00101a66(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b22(void)

{
  return;
}




void FUN_00103b2d(void)

{
  return;
}




void FUN_00101dc0(undefined8 param_1,undefined8 param_2)

{
  FUN_001026a7(param_1,param_2);
  return;
}




void FUN_001037c3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010381c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103617(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102ef9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103100(param_1,param_2,param_3);
  return;
}




void FUN_00103d8b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103b0c(void)

{
  return;
}




void FUN_001019f4(undefined8 param_1)

{
  FUN_00101d64(param_1);
  return;
}




void FUN_00103695(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102666(void)

{
  return;
}




void FUN_00102e6b(undefined8 param_1,undefined8 param_2)

{
  FUN_001030ba(param_1,param_2,0);
  return;
}




void FUN_00102d22(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102d90(param_3);
  uVar2 = FUN_00102d90(local_28);
  uVar3 = FUN_00102d90(local_20);
  uVar1 = FUN_00102fd5(uVar3,uVar2,uVar1);
  FUN_0010300a(&local_30,uVar1);
  return;
}




void FUN_001036c0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010152f(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101576(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  FUN_001036c0(*puVar1);
  free(puVar1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101430();
    DAT_00107020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101951(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101a14(long *param_1)

{
  FUN_00101d74(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101968(param_1);
  return;
}




void FUN_001027fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c8f(param_2);
  uVar2 = FUN_00102c8f(param_1);
  FUN_00102cdb(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103051(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103245(param_1);
  puVar1 = (undefined8 *)FUN_00103263(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001018dc(void)

{
  FUN_0010173b();
  return;
}




void FUN_00103441(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102d90(param_3);
  uVar2 = FUN_00102d90(local_28);
  uVar3 = FUN_00102d90(local_20);
  uVar1 = FUN_00103527(uVar3,uVar2,uVar1);
  FUN_0010300a(&local_30,uVar1);
  return;
}




void FUN_00103741(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103a92(void)

{
  return 1;
}




void FUN_001030ba(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103292(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00102bc6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010242a(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101dee(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103daa(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102da2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001031f7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d90(param_1);
  uVar1 = FUN_0010337a(uVar1,param_2,param_3);
  FUN_0010300a(&local_10,uVar1);
  return;
}




void FUN_00101afe(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101e10(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102c16(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102d90(undefined8 param_1)

{
  return param_1;
}




void FUN_00101968(undefined8 param_1)

{
  FUN_001019f4(param_1);
  return;
}




undefined8 FUN_00102aa9(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ad6(param_1,param_2);
  return param_1;
}




void FUN_00101d74(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102675(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102bed(void)

{
  return;
}




void FUN_001035e5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101dae(undefined8 param_1)

{
  return param_1;
}




void FUN_00102de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103020(param_1,param_2,param_3);
  return;
}




void FUN_001026a7(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bed(param_1,param_2);
  return;
}




void FUN_00103ae0(void)

{
  return;
}




undefined8 FUN_00103cef(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103b7a(void)

{
  return;
}




undefined8 FUN_00102d10(undefined8 param_1)

{
  return param_1;
}




void FUN_001033e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034af(param_1,param_2,param_3);
  return;
}




void FUN_0010366b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103b90(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010159a(void)

{
  long in_FS_OFFSET;
  undefined8 *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019a8(local_58);
  local_68 = (undefined8 *)0x0;
  local_68 = (undefined8 *)malloc(8);
  if (local_68 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 0x7ffffffb;
  local_60 = FUN_00101aae(local_58);
  FUN_00101afe(local_38,&local_60);
                    /* try { // try from 00101630 to 001016c5 has its CatchHandler @ 00101711 */
  FUN_00101b2c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101aae(local_58);
  FUN_00101afe(local_38,&local_60);
  FUN_00101b2c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101aae(local_58);
  FUN_00101afe(local_38,&local_60);
  FUN_00101b2c(local_58,local_38[0],1,&local_68);
  FUN_00101bf2(local_38,local_58);
                    /* try { // try from 001016cd to 001016d1 has its CatchHandler @ 001016fc */
  FUN_001014e9(local_38);
  FUN_00101a66(local_38);
  FUN_00101a66(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001032aa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c8f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f82(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010279a(undefined8 param_1)

{
  FUN_00102c00(param_1);
  return;
}




void FUN_0010341b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103512(&local_10);
  FUN_00102d10(uVar1);
  return;
}




void FUN_001037ee(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010332a(param_1,param_2,param_3);
  return;
}




long FUN_00102490(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_001033c5(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001026f4(&local_10);
  return *puVar1;
}




void FUN_00101d32(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102ee6(void)

{
  return;
}




void FUN_00102fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103150(param_1,param_2,param_3);
  return;
}




void FUN_00103100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032aa(param_2);
  uVar2 = FUN_001032aa(param_1);
  FUN_001032bc(uVar2,uVar1,param_3);
  return;
}




void FUN_00103aca(void)

{
  return;
}




ulong FUN_001038af(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d64(void)

{
  return;
}




undefined8 FUN_00102e99(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f82(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001032bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102d90(param_3);
  uVar2 = FUN_001033c5(local_28);
  uVar3 = FUN_001033c5(local_20);
  uVar1 = FUN_001033e6(uVar3,uVar2,uVar1);
  FUN_0010300a(&local_30,uVar1);
  return;
}




void FUN_00101b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00101e22(param_1);
  local_18 = FUN_00101e79(&local_38,&local_20);
  local_20 = FUN_001023de(local_30);
  uVar1 = FUN_0010242a(&local_20,local_18);
  FUN_00101ebe(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001023de(local_30);
  FUN_0010242a(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00103ab0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102580(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026d2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001026f4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101dee(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_001027b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101e10(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101e10(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101988(undefined8 param_1)

{
  FUN_001019c8(param_1);
  return;
}




void FUN_00102f6e(void)

{
  return;
}




void FUN_00103b85(void)

{
  return;
}




void FUN_00103020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031f7(param_1,param_2,param_3);
  return;
}




void FUN_00103b6f(void)

{
  return;
}




void FUN_00102a51(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e99(param_2);
  uVar2 = FUN_00102e99(param_1);
  FUN_00102cdb(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103b38(void)

{
  return;
}




void FUN_0010384f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 * FUN_0010337a(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




undefined8 FUN_00103292(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_00103d12(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void * FUN_0010355c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103b64(void)

{
  return;
}




void FUN_00102fd5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103181(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102e3c(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103ad5(void)

{
  return;
}




void FUN_00102f2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102c16(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101951(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103716(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




ulong * FUN_00103263(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103af6(void)

{
  return;
}




void FUN_00102854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d10(param_2);
  uVar2 = FUN_00102d10(param_1);
  FUN_00102d22(uVar2,uVar1,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00102b00(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ad6(param_1,param_2);
  FUN_00101d32(param_1);
  return;
}




void FUN_00103aeb(void)

{
  return;
}




long FUN_00101e79(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001026f4(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001026f4(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102a1a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e6b(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102f82(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




ulong FUN_001039b3(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103181(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103b59(void)

{
  return;
}




void FUN_0010379b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103e00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




undefined8 FUN_001025d8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001026d2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c16(param_3);
  FUN_00102f2a(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102508(undefined8 param_1)

{
  return param_1;
}




void FUN_001028a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d90(param_2);
  uVar2 = FUN_00102d90(param_1);
  FUN_00102da2(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00101e10(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103512(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_0010300a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001018ec(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001035bf("Calling good()...");
  FUN_001018dc();
  FUN_001035bf("Finished good()");
  FUN_001035bf("Calling bad()...");
  FUN_0010159a();
  FUN_001035bf("Finished bad()");
  return 0;
}




void FUN_00102766(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c00(param_1);
  FUN_00102c65(*param_1,uVar1);
  return;
}




void FUN_00103dc9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102cdb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fa0(param_1,param_2,param_3);
  return;
}




long FUN_00101576(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001036eb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010363f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_0010292a(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00102e16(param_1);
  lVar2 = FUN_00102490(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102490(local_40);
  local_30 = FUN_00102490(local_40);
  plVar3 = (long *)FUN_00102e3c(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102490(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102e16(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102e16(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101e22(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026d2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void FUN_00103527(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010355c(param_1,param_2,param_3);
  return;
}




void FUN_00103b4e(void)

{
  return;
}




void FUN_00103b43(void)

{
  return;
}




void FUN_001019c8(undefined8 param_1)

{
  FUN_00101d12(param_1);
  FUN_00101d32(param_1);
  return;
}




bool FUN_00103c94(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_0010332a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010341b(param_2);
  uVar2 = FUN_0010341b(param_1);
  FUN_00103441(uVar2,uVar1,param_3);
  return;
}




void FUN_001026d2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001019a8(undefined8 param_1)

{
  FUN_00101988(param_1);
  return;
}




void FUN_00101d12(undefined8 param_1)

{
  FUN_00102666(param_1);
  return;
}




void FUN_00103b01(void)

{
  return;
}




void FUN_00103e70(void)

{
  return;
}




void FUN_00103b17(void)

{
  return;
}




undefined8 FUN_001024b7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102aa9(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102b36(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102a1a(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00102675(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bc6(param_1,param_2,param_3);
  return;
}




void FUN_00101a66(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101dae(param_1);
  FUN_00101dc0(*param_1,param_1[1],uVar1);
  FUN_00101a14(param_1);
  return;
}




void FUN_00101ebe(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_0010292a(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001023de(local_80);
      local_60 = FUN_001027b8(&local_88,&local_78);
      local_70 = FUN_00102a1a(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101dae(local_80);
                    /* try { // try from 001021c8 to 00102253 has its CatchHandler @ 0010230b */
      FUN_001028f5(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101dae(local_80);
      puVar2 = (undefined8 *)FUN_00101e10(&local_88);
      local_70 = FUN_00102a51(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101dae(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101e10(&local_88);
      local_70 = FUN_00102a51(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101dae(local_80);
      FUN_00101dc0(*local_80,local_80[1],uVar1);
      FUN_00101d74(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102706(local_38,param_1,param_4);
                    /* try { // try from 00101f48 to 0010211b has its CatchHandler @ 001022ed */
      local_50 = FUN_0010279a(local_38);
      local_78 = FUN_00101aae(local_80);
      local_48 = FUN_001027b8(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101dae(local_80);
        FUN_001027fc(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101e10(&local_88);
        FUN_00102854(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101e10(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101e10(&local_88);
        FUN_001028a4(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101dae(local_80);
        lVar4 = FUN_001028f5(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101dae(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101e10(&local_88);
        FUN_001027fc(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101e10(&local_88);
        FUN_001028a4(*puVar2,local_40,local_50);
      }
      FUN_00102766(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001023de(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dee(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001035bf(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00103aa1(void)

{
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00102e16(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102508(param_1);
  FUN_00103051(uVar1);
  return;
}




void FUN_00102706(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102c16(param_3);
  uVar2 = FUN_00102c00(param_1);
  FUN_00102c28(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010251a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b00(param_1,param_3);
                    /* try { // try from 00102554 to 00102558 has its CatchHandler @ 0010255b */
  FUN_00102b36(param_1,param_2);
  return;
}




void FUN_001028f5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102de0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103bc7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b90,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00102b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ef9(param_1,param_2,param_3);
  return;
}




void * FUN_001034af(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103245(undefined8 param_1)

{
  FUN_00103292(param_1);
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101576(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  FUN_001036c0(*puVar1);
  free(puVar1);
  return;
}




undefined8 FUN_00101aae(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dee(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b90(param_1,param_2,param_3);
  return;
}




void FUN_00101bf2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102508(param_2);
  FUN_001024b7(&local_31,uVar1);
  uVar1 = FUN_00102490(param_2);
                    /* try { // try from 00101c58 to 00101c5c has its CatchHandler @ 00101cc5 */
  FUN_0010251a(param_1,uVar1,&local_31);
  FUN_001019f4(&local_31);
  uVar2 = FUN_00101dae(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001025d8(param_2);
  uVar4 = FUN_00102580(param_2);
                    /* try { // try from 00101ca6 to 00101caa has its CatchHandler @ 00101ce3 */
  uVar1 = FUN_00102630(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ad6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ee6(param_1,param_2);
  return;
}



