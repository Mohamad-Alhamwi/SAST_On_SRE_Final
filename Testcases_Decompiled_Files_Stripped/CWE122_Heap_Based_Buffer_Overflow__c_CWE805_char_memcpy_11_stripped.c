
void FUN_00101d4e(void)

{
  return;
}




undefined8 FUN_001017be(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010182d("Calling good()...");
  FUN_0010179f();
  FUN_0010182d("Finished good()");
  FUN_0010182d("Calling bad()...");
  FUN_001013e9();
  FUN_0010182d("Finished bad()");
  return 0;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101da6(void)

{
  return;
}




void FUN_00102070(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101d00(void)

{
  return 1;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101d43(void)

{
  return;
}




void FUN_00101dbc(void)

{
  return;
}




void FUN_00101db1(void)

{
  return;
}




void FUN_00101a31(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_00101b1d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d59(void)

{
  return;
}




void FUN_00101de8(void)

{
  return;
}




undefined8 FUN_00101f80(undefined8 *param_1)

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




void FUN_00102018(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101e35(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101dfe,local_18);
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




void FUN_00101959(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101dfe(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101984(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101dc7(void)

{
  return;
}




void FUN_0010192e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d9b(void)

{
  return;
}




bool FUN_00101f02(pthread_t *param_1)

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




void FUN_00101a5c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101d85(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00101d7a(void)

{
  return;
}




void FUN_001018ad(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ff9(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101a8a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101521(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (undefined8 *)0x0;
  iVar1 = FUN_00101d0f();
  if (iVar1 == 0) {
    local_90 = (undefined8 *)malloc(100);
    if (local_90 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *(undefined *)local_90 = 0;
  }
  else {
    FUN_0010182d("Benign, fixed string");
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_90 = local_88;
  local_90[1] = local_80;
  local_90[2] = local_78;
  local_90[3] = local_70;
  local_90[4] = local_68;
  local_90[5] = local_60;
  local_90[6] = local_58;
  local_90[7] = local_50;
  local_90[8] = local_48;
  local_90[9] = local_40;
  local_90[10] = local_38;
  local_90[0xb] = local_30;
  *(uint *)(local_90 + 0xc) = local_28;
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_0010182d(local_90);
  free(local_90);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101dd2(void)

{
  return;
}




void FUN_00101667(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (undefined8 *)0x0;
  iVar1 = FUN_00101d00();
  if (iVar1 != 0) {
    local_90 = (undefined8 *)malloc(100);
    if (local_90 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *(undefined *)local_90 = 0;
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_90 = local_88;
  local_90[1] = local_80;
  local_90[2] = local_78;
  local_90[3] = local_70;
  local_90[4] = local_68;
  local_90[5] = local_60;
  local_90[6] = local_58;
  local_90[7] = local_50;
  local_90[8] = local_48;
  local_90[9] = local_40;
  local_90[10] = local_38;
  local_90[0xb] = local_30;
  *(uint *)(local_90 + 0xc) = local_28;
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_0010182d(local_90);
  free(local_90);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010179f(void)

{
  FUN_00101521();
  FUN_00101667();
  return;
}




void FUN_0010182d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101a09(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101885(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101abd(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_00101c21(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101853(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101d6f(void)

{
  return;
}




void FUN_001020e0(void)

{
  return;
}




void FUN_00101df3(void)

{
  return;
}




void FUN_00101903(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001018d9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001019af(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_001013e9(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (undefined8 *)0x0;
  iVar1 = FUN_00101d00();
  if (iVar1 != 0) {
    local_90 = (undefined8 *)malloc(0x32);
    if (local_90 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *(undefined *)local_90 = 0;
  }
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_90 = local_88;
  local_90[1] = local_80;
  local_90[2] = local_78;
  local_90[3] = local_70;
  local_90[4] = local_68;
  local_90[5] = local_60;
  local_90[6] = local_58;
  local_90[7] = local_50;
  local_90[8] = local_48;
  local_90[9] = local_40;
  local_90[10] = local_38;
  local_90[0xb] = local_30;
  *(uint *)(local_90 + 0xc) = local_28;
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_0010182d(local_90);
  free(local_90);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00101d1e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102037(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101ddd(void)

{
  return;
}




void FUN_00101d64(void)

{
  return;
}




void FUN_00101d90(void)

{
  return;
}




undefined8 FUN_00101d0f(void)

{
  return 0;
}




void FUN_00101d38(void)

{
  return;
}




undefined8 FUN_00101f5d(void *param_1)

{
  free(param_1);
  return 1;
}



