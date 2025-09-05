
void FUN_00101653(void)

{
  FUN_00101520();
  return;
}




void FUN_00101c2b(void)

{
  return;
}




void FUN_001013e9(void)

{
  undefined8 *__s;
  long in_FS_OFFSET;
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
  __s = (undefined8 *)operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  __s[-1] = local_88;
  *__s = local_80;
  __s[1] = local_78;
  __s[2] = local_70;
  __s[3] = local_68;
  __s[4] = local_60;
  __s[5] = local_58;
  __s[6] = local_50;
  __s[7] = local_48;
  __s[8] = local_40;
  __s[9] = local_38;
  __s[10] = local_30;
  *(uint *)(__s + 0xb) = local_28;
  *(undefined *)((long)__s + 0x5b) = 0;
  FUN_001016c8(__s + -1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016c8(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c4c(void)

{
  return;
}




void FUN_00101f70(void)

{
  return;
}




void FUN_00101c99(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001018cc(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101e94(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101baa(void)

{
  return 0;
}




void FUN_00101c78(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_00101bd3(void)

{
  return;
}




void FUN_00101774(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101e1b(undefined8 *param_1)

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




void FUN_0010179e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101720(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101c57(void)

{
  return;
}




ulong FUN_001019b8(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c6d(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




undefined8 FUN_00101663(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016c8("Calling good()...");
  FUN_00101653();
  FUN_001016c8("Finished good()");
  FUN_001016c8("Calling bad()...");
  FUN_001013e9();
  FUN_001016c8("Finished bad()");
  return 0;
}




bool FUN_00101d9d(pthread_t *param_1)

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




void FUN_00101eb3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101bde(void)

{
  return;
}




void FUN_001018f7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001017f4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00101c62(void)

{
  return;
}




void FUN_00101bf4(void)

{
  return;
}




void FUN_00101748(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c15(void)

{
  return;
}




void FUN_00101c83(void)

{
  return;
}




void FUN_001016ee(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101bff(void)

{
  return;
}




void FUN_00101c36(void)

{
  return;
}




void FUN_00101925(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00101abc(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101cd0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c99,local_18);
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




void FUN_001018a4(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c41(void)

{
  return;
}




void FUN_00101520(void)

{
  undefined8 *__s;
  long in_FS_OFFSET;
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
  __s = (undefined8 *)operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *__s = local_88;
  __s[1] = local_80;
  __s[2] = local_78;
  __s[3] = local_70;
  __s[4] = local_68;
  __s[5] = local_60;
  __s[6] = local_58;
  __s[7] = local_50;
  __s[8] = local_48;
  __s[9] = local_40;
  __s[10] = local_38;
  __s[0xb] = local_30;
  *(uint *)(__s + 0xc) = local_28;
  *(undefined *)((long)__s + 99) = 0;
  FUN_001016c8(__s);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101b9b(void)

{
  return 1;
}




void FUN_00101be9(void)

{
  return;
}




void FUN_00101c20(void)

{
  return;
}




void FUN_0010184a(undefined4 param_1)

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




void FUN_00101ed2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101330();
    DAT_00104018 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101df8(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101c8e(void)

{
  return;
}




void FUN_00101958(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




int FUN_00101bb9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c0a(void)

{
  return;
}




void FUN_0010181f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001017c9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



