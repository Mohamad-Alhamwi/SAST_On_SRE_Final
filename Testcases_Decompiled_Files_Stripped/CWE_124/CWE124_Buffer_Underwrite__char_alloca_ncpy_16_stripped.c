
void FUN_00101847(undefined4 param_1)

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




void FUN_00101eb0(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101b98(void)

{
  return 1;
}




void FUN_00101c5f(void)

{
  return;
}




void FUN_00101771(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101ccd(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c96,local_18);
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




void FUN_00101c96(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010181c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c75(void)

{
  return;
}




int FUN_00101bb6(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101ba7(void)

{
  return 0;
}




void FUN_00101641(void)

{
  FUN_00101517();
  return;
}




void FUN_0010171d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001018a1(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101bf1(void)

{
  return;
}




void FUN_00101c33(void)

{
  return;
}




undefined8 FUN_00101df5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101c49(void)

{
  return;
}




void FUN_00101f70(void)

{
  return;
}




void FUN_00101c12(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00101c80(void)

{
  return;
}




void FUN_00101c07(void)

{
  return;
}




bool FUN_00101d9a(pthread_t *param_1)

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




undefined8 FUN_00101e18(undefined8 *param_1)

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




void FUN_00101bd0(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




ulong FUN_00101ab9(long param_1,ulong param_2,long param_3)

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




void FUN_00101c1d(void)

{
  return;
}




undefined8 FUN_00101656(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016c5("Calling good()...");
  FUN_00101641();
  FUN_001016c5("Finished good()");
  FUN_001016c5("Calling bad()...");
  FUN_001013e9();
  FUN_001016c5("Finished bad()");
  return 0;
}




void FUN_00101955(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101922(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_00101c3e(void)

{
  return;
}




void FUN_001016c5(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101bdb(void)

{
  return;
}




void FUN_00101517(void)

{
  char *pcVar1;
  char **ppcVar2;
  long in_FS_OFFSET;
  char *local_88;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppcVar2 = &local_88; ppcVar2 != &local_88; ppcVar2 = (char **)((long)ppcVar2 + -0x1000)) {
    *(undefined8 *)((long)ppcVar2 + -8) = *(undefined8 *)((long)ppcVar2 + -8);
  }
  *(undefined8 *)((long)ppcVar2 + -8) = *(undefined8 *)((long)ppcVar2 + -8);
  local_88 = (char *)((ulong)((long)ppcVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x1015cd;
  memset((char *)((ulong)((long)ppcVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  local_88[99] = '\0';
  local_80 = local_88;
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x1015f7;
  memset(local_78,0x43,99);
  pcVar1 = local_80;
  local_15 = 0;
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x101613;
  strncpy(pcVar1,local_78,99);
  pcVar1 = local_80;
  local_80[99] = '\0';
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x10162a;
  FUN_001016c5(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x10163f;
  __stack_chk_fail();
}




void FUN_001016eb(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101745(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018f4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c6a(void)

{
  return;
}




void FUN_00101bfc(void)

{
  return;
}




void FUN_00101ecf(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101c8b(void)

{
  return;
}




void FUN_00101e91(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001013e9(void)

{
  char *pcVar1;
  void **ppvVar2;
  long in_FS_OFFSET;
  void *local_88;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (ppvVar2 = &local_88; ppvVar2 != &local_88; ppvVar2 = (void **)((long)ppvVar2 + -0x1000)) {
    *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  }
  *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  local_88 = (void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10149f;
  memset((void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_88 + 99) = 0;
  local_80 = (char *)((long)local_88 + -8);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1014cd;
  memset(local_78,0x43,99);
  pcVar1 = local_80;
  local_15 = 0;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1014e9;
  strncpy(pcVar1,local_78,99);
  pcVar1 = local_80;
  local_80[99] = '\0';
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101500;
  FUN_001016c5(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101515;
  __stack_chk_fail();
}




void FUN_001017c6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c54(void)

{
  return;
}




void FUN_00101be6(void)

{
  return;
}




void FUN_001018c9(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_001019b5(long param_1,ulong param_2,long param_3)

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




void FUN_0010179b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001017f1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c28(void)

{
  return;
}



