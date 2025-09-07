
void FUN_00101c23(void)

{
  return;
}




ulong FUN_00101abf(long param_1,ulong param_2,long param_3)

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




void FUN_00101c44(void)

{
  return;
}




undefined8 FUN_00101dfb(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101ed5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101f70(void)

{
  return;
}




undefined8 FUN_0010165c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016cb("Calling good()...");
  FUN_00101647();
  FUN_001016cb("Finished good()");
  FUN_001016cb("Calling bad()...");
  FUN_001013e9();
  FUN_001016cb("Finished bad()");
  return 0;
}




void FUN_001016cb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c65(void)

{
  return;
}




void FUN_00101c0d(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_00101822(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018cf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101928(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101bf7(void)

{
  return;
}




void FUN_0010174b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101cd3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c9c,local_18);
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




void FUN_00101518(void)

{
  undefined8 *__ptr;
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
  __ptr = (undefined8 *)malloc(100);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *(undefined *)__ptr = 0;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *__ptr = local_88;
  __ptr[1] = local_80;
  __ptr[2] = local_78;
  __ptr[3] = local_70;
  __ptr[4] = local_68;
  __ptr[5] = local_60;
  __ptr[6] = local_58;
  __ptr[7] = local_50;
  __ptr[8] = local_48;
  __ptr[9] = local_40;
  __ptr[10] = local_38;
  __ptr[0xb] = local_30;
  *(uint *)(__ptr + 0xc) = local_28;
  *(undefined *)((long)__ptr + 99) = 0;
  FUN_001016cb(__ptr);
  free(__ptr);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010195b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_001017a1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010184d(undefined4 param_1)

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




void FUN_00101777(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_001019bb(long param_1,ulong param_2,long param_3)

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




void FUN_00101c70(void)

{
  return;
}




void FUN_001016f1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




int FUN_00101bbc(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101c2e(void)

{
  return;
}




void FUN_00101e97(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101e1e(undefined8 *param_1)

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




void FUN_001017f7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101bd6(void)

{
  return;
}




undefined8 FUN_00101bad(void)

{
  return 0;
}




void FUN_00101c4f(void)

{
  return;
}




bool FUN_00101da0(pthread_t *param_1)

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




void FUN_00101c39(void)

{
  return;
}




void FUN_001018fa(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c18(void)

{
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




void FUN_00101c5a(void)

{
  return;
}




undefined8 FUN_00101b9e(void)

{
  return 1;
}




void FUN_00101eb6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c91(void)

{
  return;
}




void FUN_001013e9(void)

{
  undefined8 *__ptr;
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
  __ptr = (undefined8 *)malloc(0x32);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *(undefined *)__ptr = 0;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *__ptr = local_88;
  __ptr[1] = local_80;
  __ptr[2] = local_78;
  __ptr[3] = local_70;
  __ptr[4] = local_68;
  __ptr[5] = local_60;
  __ptr[6] = local_58;
  __ptr[7] = local_50;
  __ptr[8] = local_48;
  __ptr[9] = local_40;
  __ptr[10] = local_38;
  __ptr[0xb] = local_30;
  *(uint *)(__ptr + 0xc) = local_28;
  *(undefined *)((long)__ptr + 99) = 0;
  FUN_001016cb(__ptr);
  free(__ptr);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00104008);
    }
    FUN_00101330();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101c7b(void)

{
  return;
}




void FUN_00101c02(void)

{
  return;
}




void FUN_001018a7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001017cc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101647(void)

{
  FUN_00101518();
  return;
}




void FUN_00101bec(void)

{
  return;
}




void FUN_00101723(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101be1(void)

{
  return;
}




void FUN_00101c86(void)

{
  return;
}




void FUN_00101c9c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}



