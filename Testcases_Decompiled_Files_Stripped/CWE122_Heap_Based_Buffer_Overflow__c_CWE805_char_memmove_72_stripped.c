
void FUN_00103c11(void)

{
  return;
}




undefined8 FUN_00103cab(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c74,local_18);
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




void FUN_00101509(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101662(param_1,2);
  __dest = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(__dest,local_78,100);
  *(undefined *)((long)__dest + 99) = 0;
  FUN_001036a3(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c74(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void * FUN_00103640(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_001026bc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027b6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00103a97(long param_1,ulong param_2,long param_3)

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




void FUN_0010374f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c74(param_1,param_2,param_3);
  return;
}




void FUN_00102d49(undefined8 param_1,undefined8 param_2)

{
  FUN_00103052(param_1,param_2);
  return;
}




undefined8 FUN_00102df4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e16(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103933(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102cd1(void)

{
  return;
}




undefined8 FUN_00102f7d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103066(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103900(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103825(undefined4 param_1)

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




void FUN_001019c0(void)

{
  FUN_00101823();
  return;
}




undefined8 FUN_00103b85(void)

{
  return 0;
}




void FUN_00101a4c(undefined8 param_1)

{
  FUN_00101ad8(param_1);
  return;
}




void FUN_001025fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102be4(param_1,param_3);
                    /* try { // try from 00102638 to 0010263c has its CatchHandler @ 0010263f */
  FUN_00102c1a(param_1,param_2);
  return;
}




void FUN_00101686(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a8c(local_58);
  local_68 = (undefined *)0x0;
  local_68 = (undefined *)malloc(0x32);
  if (local_68 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 0;
  local_60 = FUN_00101b92(local_58);
  FUN_00101be2(local_38,&local_60);
                    /* try { // try from 00101718 to 001017ad has its CatchHandler @ 001017f9 */
  FUN_00101c10(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b92(local_58);
  FUN_00101be2(local_38,&local_60);
  FUN_00101c10(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b92(local_58);
  FUN_00101be2(local_38,&local_60);
  FUN_00101c10(local_58,local_38[0],1,&local_68);
  FUN_00101cd6(local_38,local_58);
                    /* try { // try from 001017b5 to 001017b9 has its CatchHandler @ 001017e4 */
  FUN_00101509(local_38);
  FUN_00101b4a(local_38);
  FUN_00101b4a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a6c(undefined8 param_1)

{
  FUN_00101aac(param_1);
  return;
}




void FUN_00103e6f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001034ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103593(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101f06(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027b6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010300e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102cfa(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a35(8,param_2);
  *puVar2 = uVar1;
  return;
}




bool FUN_00103d78(pthread_t *param_1)

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




undefined8 FUN_00102afe(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f4f(param_1,param_2);
  }
  return uVar1;
}




void FUN_001033a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e74(param_3);
  uVar2 = FUN_001034a9(local_28);
  uVar3 = FUN_001034a9(local_20);
  uVar1 = FUN_001034ca(uVar3,uVar2,uVar1);
  FUN_001030ee(&local_30,uVar1);
  return;
}




ulong * FUN_00103347(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102efa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025ec(param_1);
  FUN_00103135(uVar1);
  return;
}




void FUN_001038a7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101ad8(undefined8 param_1)

{
  FUN_00101e48(param_1);
  return;
}




void FUN_00101823(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a8c(local_58);
  local_68 = (undefined *)0x0;
  local_68 = (undefined *)malloc(100);
  if (local_68 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = 0;
  local_60 = FUN_00101b92(local_58);
  FUN_00101be2(local_38,&local_60);
                    /* try { // try from 001018b5 to 0010194a has its CatchHandler @ 00101996 */
  FUN_00101c10(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b92(local_58);
  FUN_00101be2(local_38,&local_60);
  FUN_00101c10(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b92(local_58);
  FUN_00101be2(local_38,&local_60);
  FUN_00101c10(local_58,local_38[0],1,&local_68);
  FUN_00101cd6(local_38,local_58);
                    /* try { // try from 00101952 to 00101956 has its CatchHandler @ 00101981 */
  FUN_001015b5(local_38);
  FUN_00101b4a(local_38);
  FUN_00101b4a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103066(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101cd6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025ec(param_2);
  FUN_0010259b(&local_31,uVar1);
  uVar1 = FUN_00102574(param_2);
                    /* try { // try from 00101d3c to 00101d40 has its CatchHandler @ 00101da9 */
  FUN_001025fe(param_1,uVar1,&local_31);
  FUN_00101ad8(&local_31);
  uVar2 = FUN_00101e92(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026bc(param_2);
  uVar4 = FUN_00102664(param_2);
                    /* try { // try from 00101d8a to 00101d8e has its CatchHandler @ 00101dc7 */
  uVar1 = FUN_00102714(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bc4(void)

{
  return;
}




void FUN_00103c53(void)

{
  return;
}




void FUN_00103c5e(void)

{
  return;
}




void FUN_00101df6(undefined8 param_1)

{
  FUN_0010274a(param_1);
  return;
}




undefined8 FUN_00103df6(undefined8 *param_1)

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




void FUN_0010387f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001038d2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102e86(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103bfb(void)

{
  return;
}




void FUN_0010284a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102ce4(param_1);
  FUN_00102d49(*param_1,uVar1);
  return;
}




undefined8 FUN_0010338e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102be4(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bba(param_1,param_2);
  FUN_00101e16(param_1);
  return;
}




void FUN_00103c1c(void)

{
  return;
}




void FUN_001036fb(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103723(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001034ff(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035f6(&local_10);
  FUN_00102df4(uVar1);
  return;
}




void FUN_00103779(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00101f5d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027d8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027d8(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101be2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101ef4(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103f50(void)

{
  return;
}




void FUN_00102b35(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f7d(param_2);
  uVar2 = FUN_00102f7d(param_1);
  FUN_00102dbf(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010340e(param_1,param_2,param_3);
  return;
}




void FUN_00103bcf(void)

{
  return;
}




void FUN_00101c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f06(param_1);
  local_18 = FUN_00101f5d(&local_38,&local_20);
  local_20 = FUN_001024c2(local_30);
  uVar1 = FUN_0010250e(&local_20,local_18);
  FUN_00101fa2(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024c2(local_30);
  FUN_0010250e(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103376(void)

{
  return 0xfffffffffffffff;
}




void FUN_00101af8(long *param_1)

{
  FUN_00101e58(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a4c(param_1);
  return;
}




undefined8 FUN_00103dd3(void *param_1)

{
  free(param_1);
  return 1;
}




long FUN_00102574(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001036a3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101e48(void)

{
  return;
}




ulong FUN_00103993(long param_1,ulong param_2,long param_3)

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




void FUN_00103525(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e74(param_3);
  uVar2 = FUN_00102e74(local_28);
  uVar3 = FUN_00102e74(local_20);
  uVar1 = FUN_0010360b(uVar3,uVar2,uVar1);
  FUN_001030ee(&local_30,uVar1);
  return;
}




void FUN_0010287e(undefined8 param_1)

{
  FUN_00102ce4(param_1);
  return;
}




void FUN_00102caa(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




int FUN_00103b94(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103e8e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103c32(void)

{
  return;
}




void FUN_00103bf0(void)

{
  return;
}




void FUN_001027ea(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102cfa(param_3);
  uVar2 = FUN_00102ce4(param_1);
  FUN_00102d0c(*param_1,uVar2,uVar1);
  return;
}




void FUN_001029d9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ec4(param_1,param_2,param_3);
  return;
}




void FUN_0010274a(void)

{
  return;
}




void FUN_00102c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fdd(param_1,param_2,param_3);
  return;
}




void FUN_001037cf(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102fdd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031e4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001027d8(undefined8 param_1)

{
  return param_1;
}




void FUN_0010360b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103640(param_1,param_2,param_3);
  return;
}




void FUN_00103c48(void)

{
  return;
}




void FUN_00102988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e74(param_2);
  uVar2 = FUN_00102e74(param_1);
  FUN_00102e86(uVar2,uVar1,param_3);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




long FUN_00102ce4(long param_1)

{
  return param_1 + 8;
}




void FUN_00102f4f(undefined8 param_1,undefined8 param_2)

{
  FUN_0010319e(param_1,param_2,0);
  return;
}




void FUN_00103bda(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_0010340e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034ff(param_2);
  uVar2 = FUN_001034ff(param_1);
  FUN_00103525(uVar2,uVar1,param_3);
  return;
}




void FUN_001037a4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103c69(void)

{
  return;
}




void FUN_00102bba(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fca(param_1,param_2);
  return;
}




void FUN_001030b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103265(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00101ea4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010278b(param_1,param_2);
  return;
}




void FUN_00103084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103234(param_1,param_2,param_3);
  return;
}




void FUN_001027b6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_0010289c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101ef4(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101ef4(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_0010259b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b8d(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00103b76(void)

{
  return 1;
}




void FUN_00103329(undefined8 param_1)

{
  FUN_00103376(param_1);
  return;
}




undefined8 FUN_00103135(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103329(param_1);
  puVar1 = (undefined8 *)FUN_00103347(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_001024c2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ed2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_0010345e(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00101e58(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102759(param_1,param_2,param_3);
  }
  return;
}




long FUN_00101662(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103ead(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103be5(void)

{
  return;
}




void FUN_001015b5(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101662(param_1,2);
  __dest = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(__dest,local_78,100);
  *(undefined *)((long)__dest + 99) = 0;
  FUN_001036a3(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010319e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103376(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00101e92(undefined8 param_1)

{
  return param_1;
}




void FUN_0010278b(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cd1(param_1,param_2);
  return;
}




undefined8 FUN_001034a9(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027d8(&local_10);
  return *puVar1;
}




void FUN_001037fa(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102759(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102caa(param_1,param_2,param_3);
  return;
}




void FUN_001032db(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e74(param_1);
  uVar1 = FUN_0010345e(uVar1,param_2,param_3);
  FUN_001030ee(&local_10,uVar1);
  return;
}




void FUN_00103bb9(void)

{
  return;
}




undefined8 FUN_00101a35(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103c06(void)

{
  return;
}




void FUN_001031e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010338e(param_2);
  uVar2 = FUN_0010338e(param_1);
  FUN_001033a0(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c3d(void)

{
  return;
}




ulong FUN_00102a0e(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102efa(param_1);
  lVar2 = FUN_00102574(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102574(local_40);
  local_30 = FUN_00102574(local_40);
  plVar3 = (long *)FUN_00102f20(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102574(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102efa(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102efa(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001019d0(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036a3("Calling good()...");
  FUN_001019c0();
  FUN_001036a3("Finished good()");
  FUN_001036a3("Calling bad()...");
  FUN_00101686();
  FUN_001036a3("Finished bad()");
  return 0;
}




undefined8 FUN_00101b92(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ed2(&local_18,param_1 + 8);
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
    FUN_00101450();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00102c1a(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102afe(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void * FUN_00103593(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001028e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d73(param_2);
  uVar2 = FUN_00102d73(param_1);
  FUN_00102dbf(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00102664(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027b6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101fa2(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a0e(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024c2(local_80);
      local_60 = FUN_0010289c(&local_88,&local_78);
      local_70 = FUN_00102afe(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e92(local_80);
                    /* try { // try from 001022ac to 00102337 has its CatchHandler @ 001023ef */
      FUN_001029d9(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e92(local_80);
      puVar2 = (undefined8 *)FUN_00101ef4(&local_88);
      local_70 = FUN_00102b35(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e92(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101ef4(&local_88);
      local_70 = FUN_00102b35(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e92(local_80);
      FUN_00101ea4(*local_80,local_80[1],uVar1);
      FUN_00101e58(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027ea(local_38,param_1,param_4);
                    /* try { // try from 0010202c to 001021ff has its CatchHandler @ 001023d1 */
      local_50 = FUN_0010287e(local_38);
      local_78 = FUN_00101b92(local_80);
      local_48 = FUN_0010289c(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e92(local_80);
        FUN_001028e0(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101ef4(&local_88);
        FUN_00102938(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101ef4(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101ef4(&local_88);
        FUN_00102988(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e92(local_80);
        lVar4 = FUN_001029d9(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e92(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101ef4(&local_88);
        FUN_001028e0(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101ef4(&local_88);
        FUN_00102988(*puVar2,local_40,local_50);
      }
      FUN_0010284a(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102b8d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bba(param_1,param_2);
  return param_1;
}




void FUN_00103104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032db(param_1,param_2,param_3);
  return;
}




void FUN_00101a8c(undefined8 param_1)

{
  FUN_00101a6c(param_1);
  return;
}




void FUN_00101ed2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00101ef4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102fca(void)

{
  return;
}




void FUN_00103052(void)

{
  return;
}




undefined8 FUN_001030ee(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102df4(param_2);
  uVar2 = FUN_00102df4(param_1);
  FUN_00102e06(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c27(void)

{
  return;
}




undefined8 FUN_00102d73(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103066(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010250e(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101ed2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cfa(param_3);
  FUN_0010300e(param_1,param_2,uVar1);
  return;
}




void FUN_00102ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103104(param_1,param_2,param_3);
  return;
}




void FUN_00103bae(void)

{
  return;
}




undefined8 FUN_00102e74(undefined8 param_1)

{
  return param_1;
}




void FUN_00101aac(undefined8 param_1)

{
  FUN_00101df6(param_1);
  FUN_00101e16(param_1);
  return;
}




undefined8 FUN_00102cfa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001025ec(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b4a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e92(param_1);
  FUN_00101ea4(*param_1,param_1[1],uVar1);
  FUN_00101af8(param_1);
  return;
}




void FUN_00103ee0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102e06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e74(param_3);
  uVar2 = FUN_00102e74(local_28);
  uVar3 = FUN_00102e74(local_20);
  uVar1 = FUN_001030b9(uVar3,uVar2,uVar1);
  FUN_001030ee(&local_30,uVar1);
  return;
}




undefined8 FUN_001035f6(undefined8 *param_1)

{
  return *param_1;
}




long FUN_00103265(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00102dbf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103084(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102f20(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001036c9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}



