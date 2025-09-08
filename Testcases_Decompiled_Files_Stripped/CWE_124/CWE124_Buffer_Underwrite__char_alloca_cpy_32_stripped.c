
void FUN_00101c84(void)

{
  return;
}




void FUN_00101773(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101cdc(void)

{
  return;
}




int FUN_00101c3e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001013e9(void)

{
  char *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_a8;
  long *local_a0;
  long *local_98;
  void *local_90;
  long local_88;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = &local_a8;
  local_98 = &local_a8;
  for (plVar2 = &local_a8; plVar2 != &local_a8; plVar2 = (long *)((long)plVar2 + -0x1000)) {
    *(undefined8 *)((long)plVar2 + -8) = *(undefined8 *)((long)plVar2 + -8);
  }
  *(undefined8 *)((long)plVar2 + -8) = *(undefined8 *)((long)plVar2 + -8);
  local_90 = (void *)((ulong)((long)plVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)plVar2 + -0x78) = 0x1014c4;
  memset((void *)((ulong)((long)plVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_90 + 99) = 0;
  local_88 = (long)local_90 + -8;
  *local_a0 = local_88;
  local_80 = (char *)*local_98;
  *(undefined8 *)((long)plVar2 + -0x78) = 0x101521;
  memset(local_78,0x43,99);
  pcVar1 = local_80;
  local_15 = 0;
  *(undefined8 *)((long)plVar2 + -0x78) = 0x101538;
  strcpy(pcVar1,local_78);
  pcVar1 = local_80;
  *(undefined8 *)((long)plVar2 + -0x78) = 0x101544;
  FUN_0010174d(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)plVar2 + -0x78) = 0x101559;
  __stack_chk_fail();
}




void FUN_00101c79(void)

{
  return;
}




void FUN_00101cf2(void)

{
  return;
}




void FUN_00101ce7(void)

{
  return;
}




void FUN_001019aa(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




undefined8 FUN_00101c20(void)

{
  return 1;
}




void FUN_00101c8f(void)

{
  return;
}




void FUN_00101d1e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101f38(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101e7d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001018cf(undefined4 param_1)

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




bool FUN_00101e22(pthread_t *param_1)

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




void FUN_00101929(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101cfd(void)

{
  return;
}




void FUN_001018a4(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cd1(void)

{
  return;
}




undefined8 FUN_00101ea0(undefined8 *param_1)

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




void FUN_001019dd(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101cbb(void)

{
  return;
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




void FUN_00101cb0(void)

{
  return;
}




void FUN_00101823(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f57(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00101a3d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001016c9(void)

{
  FUN_0010155b();
  return;
}




void FUN_00101d08(void)

{
  return;
}




undefined8 FUN_001016de(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010174d("Calling good()...");
  FUN_001016c9();
  FUN_0010174d("Finished good()");
  FUN_0010174d("Calling bad()...");
  FUN_001013e9();
  FUN_0010174d("Finished bad()");
  return 0;
}




void FUN_0010174d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001017a5(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010197c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001017f9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_00101b41(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101c2f(void)

{
  return 0;
}




void FUN_001017cd(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ca5(void)

{
  return;
}




undefined8 FUN_00101d55(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d1e,local_18);
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




void FUN_00101879(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010184e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101951(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_0010155b(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  void *local_90;
  void *local_88;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = &local_a8;
  local_98 = &local_a8;
  for (puVar2 = &local_a8; puVar2 != &local_a8; puVar2 = (undefined8 *)((long)puVar2 + -0x1000)) {
    *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
  }
  *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
  local_90 = (void *)((ulong)((long)puVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)puVar2 + -0x78) = 0x101636;
  memset((void *)((ulong)((long)puVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_90 + 99) = 0;
  local_88 = local_90;
  *local_a0 = local_90;
  local_80 = (char *)*local_98;
  *(undefined8 *)((long)puVar2 + -0x78) = 0x10168f;
  memset(local_78,0x43,99);
  pcVar1 = local_80;
  local_15 = 0;
  *(undefined8 *)((long)puVar2 + -0x78) = 0x1016a6;
  strcpy(pcVar1,local_78);
  pcVar1 = local_80;
  *(undefined8 *)((long)puVar2 + -0x78) = 0x1016b2;
  FUN_0010174d(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)puVar2 + -0x78) = 0x1016c7;
  __stack_chk_fail();
}




void FUN_00101c63(void)

{
  return;
}




void FUN_00102000(void)

{
  return;
}




void FUN_00101d13(void)

{
  return;
}




void FUN_00101c9a(void)

{
  return;
}




void FUN_00101cc6(void)

{
  return;
}




void FUN_00101c58(void)

{
  return;
}




void FUN_00101c6e(void)

{
  return;
}




void FUN_00101f19(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}



