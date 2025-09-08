
void FUN_0010187f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f50(void)

{
  return;
}




void FUN_00101ead(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101b85(void)

{
  return 0;
}




void FUN_00101c48(void)

{
  return;
}




void FUN_00101779(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00101d78(pthread_t *param_1)

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




undefined8 FUN_00101cab(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c74,local_18);
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




void FUN_00101825(undefined4 param_1)

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




void FUN_00101c5e(void)

{
  return;
}




void FUN_00101bae(void)

{
  return;
}




int FUN_00101b94(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101634(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016a3("Calling good()...");
  FUN_0010161f();
  FUN_001016a3("Finished good()");
  FUN_001016a3("Calling bad()...");
  FUN_001013e9();
  FUN_001016a3("Finished bad()");
  return 0;
}




void FUN_00101723(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018a7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101bda(void)

{
  return;
}




void FUN_00101c1c(void)

{
  return;
}




undefined8 FUN_00101df6(undefined8 *param_1)

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




void FUN_00101c32(void)

{
  return;
}




void FUN_00101bfb(void)

{
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




void FUN_00101c69(void)

{
  return;
}




void FUN_00101bf0(void)

{
  return;
}




undefined8 FUN_00101dd3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101e6f(pthread_mutex_t *param_1)

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
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1014cc;
  memset(local_78,0x43,99);
  pcVar1 = local_80;
  local_15 = 0;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1014e3;
  strcpy(pcVar1,local_78);
  pcVar1 = local_80;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1014ef;
  FUN_001016a3(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x101504;
  __stack_chk_fail();
}




void FUN_00101bb9(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




undefined8 FUN_00101b76(void)

{
  return 1;
}




void FUN_00101c06(void)

{
  return;
}




void FUN_001016a3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




ulong FUN_00101993(long param_1,ulong param_2,long param_3)

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




void FUN_00101933(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101c27(void)

{
  return;
}




void FUN_001016c9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101bc4(void)

{
  return;
}




void FUN_0010161f(void)

{
  FUN_00101506();
  return;
}




void FUN_001016fb(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_0010174f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101900(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101c53(void)

{
  return;
}




void FUN_00101be5(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101ee0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101c74(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101e8e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101506(void)

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
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x1015bc;
  memset((char *)((ulong)((long)ppcVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  local_88[99] = '\0';
  local_80 = local_88;
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x1015e5;
  memset(local_78,0x43,99);
  pcVar1 = local_80;
  local_15 = 0;
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x1015fc;
  strcpy(pcVar1,local_78);
  pcVar1 = local_80;
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x101608;
  FUN_001016a3(pcVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar2 + -0x78) = 0x10161d;
  __stack_chk_fail();
}




void FUN_001017cf(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c3d(void)

{
  return;
}




void FUN_00101bcf(void)

{
  return;
}




void FUN_001018d2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00101a97(long param_1,ulong param_2,long param_3)

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




void FUN_001017a4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001017fa(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c11(void)

{
  return;
}



