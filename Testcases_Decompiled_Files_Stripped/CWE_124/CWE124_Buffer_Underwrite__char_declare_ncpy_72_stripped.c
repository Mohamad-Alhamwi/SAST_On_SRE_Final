
void FUN_001033b9(undefined8 param_1)

{
  FUN_00103406(param_1);
  return;
}




void FUN_001035b5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f04(param_3);
  uVar2 = FUN_00102f04(local_28);
  uVar3 = FUN_00102f04(local_20);
  uVar1 = FUN_0010369b(uVar3,uVar2,uVar1);
  FUN_0010317e(&local_30,uVar1);
  return;
}




void FUN_00103cee(void)

{
  return;
}




void FUN_001037df(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010358f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103686(&local_10);
  FUN_00102e84(uVar1);
  return;
}




long FUN_00102d74(long param_1)

{
  return param_1 + 8;
}




void FUN_0010309e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d8a(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101ac5(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102e4f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103114(param_1,param_2,param_3);
  return;
}




void FUN_00103c54(void)

{
  return;
}




void FUN_00101ee8(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001027e9(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101f62(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00101c22(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f62(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010305a(void)

{
  return;
}




void FUN_00101d66(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010267c(param_2);
  FUN_0010262b(&local_31,uVar1);
  uVar1 = FUN_00102604(param_2);
                    /* try { // try from 00101dcc to 00101dd0 has its CatchHandler @ 00101e39 */
  FUN_0010268e(param_1,uVar1,&local_31);
  FUN_00101b68(&local_31);
  uVar2 = FUN_00101f22(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010274c(param_2);
  uVar4 = FUN_001026f4(param_2);
                    /* try { // try from 00101e1a to 00101e1e has its CatchHandler @ 00101e57 */
  uVar1 = FUN_001027a4(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102604(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_0010300d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030f6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103194(param_1,param_2,param_3);
  return;
}




void FUN_001030f6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void * FUN_001036d0(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001038b5(undefined4 param_1)

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




void FUN_00102c4a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010305a(param_1,param_2);
  return;
}




void FUN_0010268e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c74(param_1,param_3);
                    /* try { // try from 001026c8 to 001026cc has its CatchHandler @ 001026cf */
  FUN_00102caa(param_1,param_2);
  return;
}




void * FUN_00103623(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101afc(undefined8 param_1)

{
  FUN_00101b3c(param_1);
  return;
}




ulong FUN_00102a9e(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f8a(param_1);
  lVar2 = FUN_00102604(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102604(local_40);
  local_30 = FUN_00102604(local_40);
  plVar3 = (long *)FUN_00102fb0(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102604(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f8a(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f8a(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001029c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e84(param_2);
  uVar2 = FUN_00102e84(param_1);
  FUN_00102e96(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102552(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f62(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103c06(void)

{
  return 1;
}




ulong * FUN_00102fb0(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103ca1(void)

{
  return;
}




void FUN_00103d04(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010274c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102846(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103990(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103809(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010336b(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_001034ee(undefined8 *param_1,long param_2,undefined8 *param_3)

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




undefined8 FUN_00103d3b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d04,local_18);
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




undefined8 FUN_00103539(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102868(&local_10);
  return *puVar1;
}




void FUN_00103c75(void)

{
  return;
}




void FUN_0010369b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036d0(param_1,param_2,param_3);
  return;
}




void FUN_00102f8a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010267c(param_1);
  FUN_001031c5(uVar1);
  return;
}




void FUN_00102fdf(undefined8 param_1,undefined8 param_2)

{
  FUN_0010322e(param_1,param_2,0);
  return;
}




long FUN_00101fed(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102868(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102868(param_2);
  return lVar1 - *plVar2 >> 3;
}




long FUN_001032f5(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001015a9(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010164a(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_00103733(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a69(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f54(param_1,param_2,param_3);
  return;
}




void FUN_00101b88(long *param_1)

{
  FUN_00101ee8(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101adc(param_1);
  return;
}




ulong * FUN_001033d7(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c49(void)

{
  return;
}




void FUN_00102dd9(undefined8 param_1,undefined8 param_2)

{
  FUN_001030e2(param_1,param_2);
  return;
}




undefined8 FUN_00102e03(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030f6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c74(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c4a(param_1,param_2);
  FUN_00101ea6(param_1);
  return;
}




void FUN_00103f70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00102e84(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cd8(void)

{
  return;
}




void FUN_001037b3(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b1c(undefined8 param_1)

{
  FUN_00101afc(param_1);
  return;
}




void FUN_00103834(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001028da(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d74(param_1);
  FUN_00102dd9(*param_1,uVar1);
  return;
}




undefined8 FUN_001031c5(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001033b9(param_1);
  puVar1 = (undefined8 *)FUN_001033d7(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103f1e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f04(param_2);
  uVar2 = FUN_00102f04(param_1);
  FUN_00102f16(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103686(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102d8a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cac(void)

{
  return;
}




void FUN_0010306d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103274(param_1,param_2,param_3);
  return;
}




void FUN_00102caa(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b8e(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




long FUN_0010164a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




bool FUN_00103e08(pthread_t *param_1)

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




void FUN_00101ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f96(param_1);
  local_18 = FUN_00101fed(&local_38,&local_20);
  local_20 = FUN_00102552(local_30);
  uVar1 = FUN_0010259e(&local_20,local_18);
  FUN_00102032(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102552(local_30);
  FUN_0010259e(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032c4(param_1,param_2,param_3);
  return;
}




void FUN_00103733(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010341e(undefined8 param_1)

{
  return param_1;
}




void FUN_001032c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010349e(param_1,param_2,param_3);
  return;
}




void FUN_00103c96(void)

{
  return;
}




void FUN_00101509(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010164a(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_00103733(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101ac5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




ulong FUN_00103a23(long param_1,ulong param_2,long param_3)

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




void FUN_00101c72(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f84(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102f04(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010267c(undefined8 param_1)

{
  return param_1;
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




void FUN_00102d61(void)

{
  return;
}




void FUN_00103cb7(void)

{
  return;
}




void FUN_0010349e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010358f(param_2);
  uVar2 = FUN_0010358f(param_1);
  FUN_001035b5(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00101a60(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103733("Calling good()...");
  FUN_00101a50();
  FUN_00103733("Finished good()");
  FUN_00103733("Calling bad()...");
  FUN_0010166e();
  FUN_00103733("Finished bad()");
  return 0;
}




void FUN_00101e86(undefined8 param_1)

{
  FUN_001027da(param_1);
  return;
}




int FUN_00103c24(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103eff(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010385f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103e63(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010322e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103406(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00102b8e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102fdf(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102e96(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f04(param_3);
  uVar2 = FUN_00102f04(local_28);
  uVar3 = FUN_00102f04(local_20);
  uVar1 = FUN_00103149(uVar3,uVar2,uVar1);
  FUN_0010317e(&local_30,uVar1);
  return;
}




void FUN_0010355a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103623(param_1,param_2,param_3);
  return;
}




void FUN_00101b68(undefined8 param_1)

{
  FUN_00101ed8(param_1);
  return;
}




void FUN_001027da(void)

{
  return;
}




void FUN_00103cc2(void)

{
  return;
}




void FUN_00103ce3(void)

{
  return;
}




undefined8 FUN_00103e86(undefined8 *param_1)

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




void FUN_001027a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d04(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00103c80(void)

{
  return;
}




void FUN_0010166e(void)

{
  long in_FS_OFFSET;
  undefined *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [3];
  undefined auStack_90 [8];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b1c(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d8 = auStack_90;
  local_d0 = FUN_00101c22(local_c8);
  FUN_00101c72(local_a8,&local_d0);
                    /* try { // try from 00101714 to 001017d9 has its CatchHandler @ 00101831 */
  FUN_00101ca0(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101c22(local_c8);
  FUN_00101c72(local_a8,&local_d0);
  FUN_00101ca0(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101c22(local_c8);
  FUN_00101c72(local_a8,&local_d0);
  FUN_00101ca0(local_c8,local_a8[0],1,&local_d8);
  FUN_00101d66(local_a8,local_c8);
                    /* try { // try from 001017e4 to 001017e8 has its CatchHandler @ 00101819 */
  FUN_00101509(local_a8);
  FUN_00101bda(local_a8);
  FUN_00101bda(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001030e2(void)

{
  return;
}




void FUN_00102970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e03(param_2);
  uVar2 = FUN_00102e03(param_1);
  FUN_00102e4f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103962(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103fe0(void)

{
  return;
}




undefined8 FUN_00103c15(void)

{
  return 0;
}




void FUN_00102846(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102bc5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010300d(param_2);
  uVar2 = FUN_0010300d(param_1);
  FUN_00102e4f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103759(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010341e(param_2);
  uVar2 = FUN_0010341e(param_1);
  FUN_00103430(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c6a(void)

{
  return;
}




undefined8 FUN_00102868(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c8b(void)

{
  return;
}




void FUN_0010388a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




undefined8 FUN_00102c1d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c4a(param_1,param_2);
  return param_1;
}




void FUN_00102f16(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103c3e(void)

{
  return;
}




long FUN_0010292c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f84(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f84(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_0010317e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010336b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102f04(param_1);
  uVar1 = FUN_001034ee(uVar1,param_2,param_3);
  FUN_0010317e(&local_10,uVar1);
  return;
}




void FUN_0010287a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d8a(param_3);
  uVar2 = FUN_00102d74(param_1);
  FUN_00102d9c(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f04(param_3);
  uVar2 = FUN_00103539(local_28);
  uVar3 = FUN_00103539(local_20);
  uVar1 = FUN_0010355a(uVar3,uVar2,uVar1);
  FUN_0010317e(&local_30,uVar1);
  return;
}




void FUN_00101adc(undefined8 param_1)

{
  FUN_00101b68(param_1);
  return;
}




void FUN_00101bda(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f22(param_1);
  FUN_00101f34(*param_1,param_1[1],uVar1);
  FUN_00101b88(param_1);
  return;
}




void FUN_00102d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010306d(param_1,param_2,param_3);
  return;
}




ulong FUN_00103b27(long param_1,ulong param_2,long param_3)

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




void FUN_00101861(void)

{
  long in_FS_OFFSET;
  undefined *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b1c(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d8 = local_88;
  local_d0 = FUN_00101c22(local_c8);
  FUN_00101c72(local_a8,&local_d0);
                    /* try { // try from 00101903 to 001019c8 has its CatchHandler @ 00101a20 */
  FUN_00101ca0(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101c22(local_c8);
  FUN_00101c72(local_a8,&local_d0);
  FUN_00101ca0(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101c22(local_c8);
  FUN_00101c72(local_a8,&local_d0);
  FUN_00101ca0(local_c8,local_a8[0],1,&local_d8);
  FUN_00101d66(local_a8,local_c8);
                    /* try { // try from 001019d3 to 001019d7 has its CatchHandler @ 00101a08 */
  FUN_001015a9(local_a8);
  FUN_00101bda(local_a8);
  FUN_00101bda(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010281b(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d61(param_1,param_2);
  return;
}




void FUN_00101b3c(undefined8 param_1)

{
  FUN_00101e86(param_1);
  FUN_00101ea6(param_1);
  return;
}




void FUN_00103f3d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001039c3(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103c5f(void)

{
  return;
}




undefined8 FUN_0010262b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c1d(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_001026f4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102846(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001027e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d3a(param_1,param_2,param_3);
  return;
}




void FUN_00101a50(void)

{
  FUN_00101861();
  return;
}




void FUN_00103937(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103406(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_00101f22(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cf9(void)

{
  return;
}




void FUN_00101ed8(void)

{
  return;
}




void FUN_00102032(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a9e(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102552(local_80);
      local_60 = FUN_0010292c(&local_88,&local_78);
      local_70 = FUN_00102b8e(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f22(local_80);
                    /* try { // try from 0010233c to 001023c7 has its CatchHandler @ 0010247f */
      FUN_00102a69(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f22(local_80);
      puVar2 = (undefined8 *)FUN_00101f84(&local_88);
      local_70 = FUN_00102bc5(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f22(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f84(&local_88);
      local_70 = FUN_00102bc5(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f22(local_80);
      FUN_00101f34(*local_80,local_80[1],uVar1);
      FUN_00101ee8(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010287a(local_38,param_1,param_4);
                    /* try { // try from 001020bc to 0010228f has its CatchHandler @ 00102461 */
      local_50 = FUN_0010290e(local_38);
      local_78 = FUN_00101c22(local_80);
      local_48 = FUN_0010292c(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f22(local_80);
        FUN_00102970(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f84(&local_88);
        FUN_001029c8(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f84(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f84(&local_88);
        FUN_00102a18(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f22(local_80);
        lVar4 = FUN_00102a69(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f22(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f84(&local_88);
        FUN_00102970(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f84(&local_88);
        FUN_00102a18(*puVar2,local_40,local_50);
      }
      FUN_001028da(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103149(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032f5(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101f96(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102846(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ea6(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_0010378b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101f84(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d3a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010290e(undefined8 param_1)

{
  FUN_00102d74(param_1);
  return;
}




void FUN_00101f34(undefined8 param_1,undefined8 param_2)

{
  FUN_0010281b(param_1,param_2);
  return;
}




void FUN_0010390f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103ccd(void)

{
  return;
}




undefined8 FUN_0010259e(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f62(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d8a(param_3);
  FUN_0010309e(param_1,param_2,uVar1);
  return;
}



