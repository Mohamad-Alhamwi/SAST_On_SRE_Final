
void FUN_00103725(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001038fc(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103be3(void)

{
  return;
}




void FUN_001038d1(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d24(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a5f(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101ad6(undefined8 param_1)

{
  FUN_00101e20(param_1);
  FUN_00101e40(param_1);
  return;
}




void FUN_001033ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e9e(param_3);
  uVar2 = FUN_001034d3(local_28);
  uVar3 = FUN_001034d3(local_20);
  uVar1 = FUN_001034f4(uVar3,uVar2,uVar1);
  FUN_00103118(&local_30,uVar1);
  return;
}




undefined8 FUN_00103118(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101b02(undefined8 param_1)

{
  FUN_00101e72(param_1);
  return;
}




void FUN_00102774(void)

{
  return;
}




void FUN_001027e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001033a0(void)

{
  return 0xfffffffffffffff;
}




void FUN_00102628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c0e(param_1,param_3);
                    /* try { // try from 00102662 to 00102666 has its CatchHandler @ 00102669 */
  FUN_00102c44(param_1,param_2);
  return;
}




void FUN_00102962(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e1e(param_2);
  uVar2 = FUN_00102e1e(param_1);
  FUN_00102e30(uVar2,uVar1,param_3);
  return;
}




ulong * FUN_00103371(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010325e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103438(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103e20(undefined8 *param_1)

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




void FUN_00101a96(undefined8 param_1)

{
  FUN_00101ad6(param_1);
  return;
}




undefined8 * FUN_00103488(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103ed7(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




ulong FUN_00103ac1(long param_1,ulong param_2,long param_3)

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




void FUN_001014e9(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  ulong local_1b8;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010169a(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  for (local_1b8 = 0; local_1b8 < 100; local_1b8 = local_1b8 + 1) {
    __ptr[local_1b8] = *(undefined4 *)((long)local_1a8 + local_1b8 * 4);
  }
  FUN_00103725(*__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c1a(void)

{
  return;
}




void FUN_00102f24(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102616(param_1);
  FUN_0010315f(uVar1);
  return;
}




ulong FUN_00102a38(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f24(param_1);
  lVar2 = FUN_0010259e(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010259e(local_40);
  local_30 = FUN_0010259e(local_40);
  plVar3 = (long *)FUN_00102f4a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010259e(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f24(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f24(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010392a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101f30(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027e0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e9e(param_3);
  uVar2 = FUN_00102e9e(local_28);
  uVar3 = FUN_00102e9e(local_20);
  uVar1 = FUN_001030e3(uVar3,uVar2,uVar1);
  FUN_00103118(&local_30,uVar1);
  return;
}




void FUN_00103e99(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102d9d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103090(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001028c6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f1e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f1e(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103305(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e9e(param_1);
  uVar1 = FUN_00103488(uVar1,param_2,param_3);
  FUN_00103118(&local_10,uVar1);
  return;
}




void FUN_00102b5f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102fa7(param_2);
  uVar2 = FUN_00102fa7(param_1);
  FUN_00102de9(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103c46(void)

{
  return;
}




void FUN_00103bee(void)

{
  return;
}




void FUN_0010354f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e9e(param_3);
  uVar2 = FUN_00102e9e(local_28);
  uVar3 = FUN_00102e9e(local_20);
  uVar1 = FUN_00103635(uVar3,uVar2,uVar1);
  FUN_00103118(&local_30,uVar1);
  return;
}




void FUN_00103824(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010384f(undefined4 param_1)

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




ulong FUN_001039bd(long param_1,ulong param_2,long param_3)

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




long FUN_0010328f(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103353(undefined8 param_1)

{
  FUN_001033a0(param_1);
  return;
}




void FUN_00102874(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d0e(param_1);
  FUN_00102d73(*param_1,uVar1);
  return;
}




void FUN_001019ea(void)

{
  FUN_00101854();
  return;
}




void FUN_001036cd(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101e20(undefined8 param_1)

{
  FUN_00102774(param_1);
  return;
}




bool FUN_00103da2(pthread_t *param_1)

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




undefined8 FUN_00102e1e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102538(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101efc(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010374d(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001030ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010325e(param_1,param_2,param_3);
  return;
}




void FUN_00103c93(void)

{
  return;
}




void FUN_001030e3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010328f(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102f4a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010312e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103305(param_1,param_2,param_3);
  return;
}




void FUN_00103bd8(void)

{
  return;
}




long FUN_00101f87(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102802(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102802(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103bf9(void)

{
  return;
}




long FUN_00102d0e(long param_1)

{
  return param_1 + 8;
}




void * FUN_001035bd(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001016be(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ab6(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(200);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101bbc(local_58);
  FUN_00101c0c(local_38,&local_60);
                    /* try { // try from 00101749 to 001017de has its CatchHandler @ 0010182a */
  FUN_00101c3a(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bbc(local_58);
  FUN_00101c0c(local_38,&local_60);
  FUN_00101c3a(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bbc(local_58);
  FUN_00101c0c(local_38,&local_60);
  FUN_00101c3a(local_58,local_38[0],1,&local_68);
  FUN_00101d00(local_38,local_58);
                    /* try { // try from 001017e6 to 001017ea has its CatchHandler @ 00101815 */
  FUN_001014e9(local_38);
  FUN_00101b74(local_38);
  FUN_00101b74(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102de9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030ae(param_1,param_2,param_3);
  return;
}




long FUN_0010169a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_0010395d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103c67(void)

{
  return;
}




void FUN_0010307c(void)

{
  return;
}




void FUN_00103c88(void)

{
  return;
}




undefined8 FUN_001033b8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f79(undefined8 param_1,undefined8 param_2)

{
  FUN_001031c8(param_1,param_2,0);
  return;
}




void FUN_00101e40(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00102616(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001034d3(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102802(&local_10);
  return *puVar1;
}




void FUN_00103c72(void)

{
  return;
}




undefined8 FUN_00103ba0(void)

{
  return 1;
}




void FUN_001037a3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void * FUN_0010366a(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103f80(void)

{
  return;
}




void FUN_00101d00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102616(param_2);
  FUN_001025c5(&local_31,uVar1);
  uVar1 = FUN_0010259e(param_2);
                    /* try { // try from 00101d66 to 00101d6a has its CatchHandler @ 00101dd3 */
  FUN_00102628(param_1,uVar1,&local_31);
  FUN_00101b02(&local_31);
  uVar2 = FUN_00101ebc(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026e6(param_2);
  uVar4 = FUN_0010268e(param_2);
                    /* try { // try from 00101db4 to 00101db8 has its CatchHandler @ 00101df1 */
  uVar1 = FUN_0010273e(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101efc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101b22(long *param_1)

{
  FUN_00101e82(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a76(param_1);
  return;
}




void FUN_00103c5c(void)

{
  return;
}




undefined8 FUN_001025c5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102bb7(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001031c8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033a0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00103dfd(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102a03(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102eee(param_1,param_2,param_3);
  return;
}




void FUN_00101c3a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f30(param_1);
  local_18 = FUN_00101f87(&local_38,&local_20);
  local_20 = FUN_001024ec(local_30);
  uVar1 = FUN_00102538(&local_20,local_18);
  FUN_00101fcc(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024ec(local_30);
  FUN_00102538(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103007(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010320e(param_1,param_2,param_3);
  return;
}




void FUN_001037f9(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101ece(undefined8 param_1,undefined8 param_2)

{
  FUN_001027b5(param_1,param_2);
  return;
}




void FUN_00101854(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ab6(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(400);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101bbc(local_58);
  FUN_00101c0c(local_38,&local_60);
                    /* try { // try from 001018df to 00101974 has its CatchHandler @ 001019c0 */
  FUN_00101c3a(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bbc(local_58);
  FUN_00101c0c(local_38,&local_60);
  FUN_00101c3a(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101bbc(local_58);
  FUN_00101c0c(local_38,&local_60);
  FUN_00101c3a(local_58,local_38[0],1,&local_68);
  FUN_00101d00(local_38,local_58);
                    /* try { // try from 0010197c to 00101980 has its CatchHandler @ 001019ab */
  FUN_001015c1(local_38);
  FUN_00101b74(local_38);
  FUN_00101b74(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010268e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027e0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c04(void)

{
  return;
}




undefined8 FUN_00103620(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00101a5f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102e9e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010315f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103353(param_1);
  puVar1 = (undefined8 *)FUN_00103371(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001038a9(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




undefined8 FUN_001024ec(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101efc(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102be4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ff4(param_1,param_2);
  return;
}




undefined8 FUN_001019fa(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036cd("Calling good()...");
  FUN_001019ea();
  FUN_001036cd("Finished good()");
  FUN_001036cd("Calling bad()...");
  FUN_001016be();
  FUN_001036cd("Finished bad()");
  return 0;
}




undefined8 FUN_00102bb7(undefined8 param_1,undefined8 param_2)

{
  FUN_00102be4(param_1,param_2);
  return param_1;
}




void FUN_00101c0c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f1e(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101e72(void)

{
  return;
}




void FUN_00103438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103529(param_2);
  uVar2 = FUN_00103529(param_1);
  FUN_0010354f(uVar2,uVar1,param_3);
  return;
}




void FUN_00102d73(undefined8 param_1,undefined8 param_2)

{
  FUN_0010307c(param_1,param_2);
  return;
}




void FUN_00103c3b(void)

{
  return;
}




void FUN_00102c9e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103007(param_1,param_2,param_3);
  return;
}




void FUN_00102eb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_00103baf(void)

{
  return 0;
}




void FUN_00103635(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010366a(param_1,param_2,param_3);
  return;
}




void FUN_00103eb8(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102cd4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103c0f(void)

{
  return;
}




undefined8 FUN_00101bbc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101efc(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102eee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010312e(param_1,param_2,param_3);
  return;
}




void FUN_0010320e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033b8(param_2);
  uVar2 = FUN_001033b8(param_1);
  FUN_001033ca(uVar2,uVar1,param_3);
  return;
}




void FUN_00101b74(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ebc(param_1);
  FUN_00101ece(*param_1,param_1[1],uVar1);
  FUN_00101b22(param_1);
  return;
}




void FUN_00102d36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d24(param_3);
  FUN_00103038(param_1,param_2,uVar1);
  return;
}




void FUN_00103529(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103620(&local_10);
  FUN_00102e1e(uVar1);
  return;
}




void FUN_001036f3(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103cd5(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c9e,local_18);
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




void FUN_00102cfb(void)

{
  return;
}




void FUN_001037ce(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101f1e(undefined8 param_1)

{
  return param_1;
}




long FUN_0010259e(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00101a76(undefined8 param_1)

{
  FUN_00101b02(param_1);
  return;
}




undefined8 FUN_00102fa7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103090(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e82(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102783(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101ab6(undefined8 param_1)

{
  FUN_00101a96(param_1);
  return;
}




void FUN_00101fcc(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a38(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024ec(local_80);
      local_60 = FUN_001028c6(&local_88,&local_78);
      local_70 = FUN_00102b28(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101ebc(local_80);
                    /* try { // try from 001022d6 to 00102361 has its CatchHandler @ 00102419 */
      FUN_00102a03(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101ebc(local_80);
      puVar2 = (undefined8 *)FUN_00101f1e(&local_88);
      local_70 = FUN_00102b5f(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101ebc(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f1e(&local_88);
      local_70 = FUN_00102b5f(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101ebc(local_80);
      FUN_00101ece(*local_80,local_80[1],uVar1);
      FUN_00101e82(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102814(local_38,param_1,param_4);
                    /* try { // try from 00102056 to 00102229 has its CatchHandler @ 001023fb */
      local_50 = FUN_001028a8(local_38);
      local_78 = FUN_00101bbc(local_80);
      local_48 = FUN_001028c6(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101ebc(local_80);
        FUN_0010290a(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f1e(&local_88);
        FUN_00102962(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f1e(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f1e(&local_88);
        FUN_001029b2(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101ebc(local_80);
        lVar4 = FUN_00102a03(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101ebc(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f1e(&local_88);
        FUN_0010290a(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f1e(&local_88);
        FUN_001029b2(*puVar2,local_40,local_50);
      }
      FUN_00102874(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c44(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b28(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103c51(void)

{
  return;
}




void FUN_001029b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e9e(param_2);
  uVar2 = FUN_00102e9e(param_1);
  FUN_00102eb0(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102b28(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f79(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102c0e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102be4(param_1,param_2);
  FUN_00101e40(param_1);
  return;
}




void FUN_001015c1(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  ulong local_1b8;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010169a(param_1,2);
  __ptr = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  for (local_1b8 = 0; local_1b8 < 100; local_1b8 = local_1b8 + 1) {
    __ptr[local_1b8] = *(undefined4 *)((long)local_1a8 + local_1b8 * 4);
  }
  FUN_00103725(*__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




undefined8 FUN_00101ebc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c30(void)

{
  return;
}




void FUN_00103779(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102783(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cd4(param_1,param_2,param_3);
  return;
}




void FUN_00103c7d(void)

{
  return;
}




void FUN_00103f10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010273e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c9e(param_1,param_2,param_3);
  return;
}




void FUN_001028a8(undefined8 param_1)

{
  FUN_00102d0e(param_1);
  return;
}




void FUN_00103c9e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001034f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035bd(param_1,param_2,param_3);
  return;
}




void FUN_00102814(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d24(param_3);
  uVar2 = FUN_00102d0e(param_1);
  FUN_00102d36(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_001026e6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027e0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00103bbe(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102802(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ff4(void)

{
  return;
}




undefined8 FUN_00102d24(undefined8 param_1)

{
  return param_1;
}




void FUN_001027b5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cfb(param_1,param_2);
  return;
}




void FUN_00103c25(void)

{
  return;
}




void FUN_0010290a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d9d(param_2);
  uVar2 = FUN_00102d9d(param_1);
  FUN_00102de9(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103090(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



