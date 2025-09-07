
ulong FUN_00101a1d(long param_1,ulong param_2,long param_3)

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




void FUN_00101f37(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010198a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101c00(void)

{
  return 1;
}




void FUN_00101c90(void)

{
  return;
}




void FUN_001013e8(undefined8 param_1)

{
  FUN_00101676(param_1);
  return;
}




void FUN_00101785(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101cdd(void)

{
  return;
}




void FUN_00101884(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cf3(void)

{
  return;
}




void FUN_00101859(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c43(void)

{
  return;
}




int FUN_00101c1e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c4e(void)

{
  return;
}




void FUN_001017d9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101c59(void)

{
  return;
}




void FUN_00101426(undefined8 param_1)

{
  FUN_001013c9(param_1);
  return;
}




void FUN_00101cbc(void)

{
  return;
}




void FUN_00101407(undefined8 param_1)

{
  FUN_001016cc(param_1);
  return;
}




void FUN_00101909(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f28)();
  return;
}




void FUN_001014e4(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(4);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar1 = malloc(8);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  FUN_00101445(pvVar1);
  return;
}




ulong FUN_00101b21(long param_1,ulong param_2,long param_3)

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




void FUN_001016cc(void *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00101717(4,param_1);
  *puVar1 = 5;
  FUN_00101785(*puVar1);
  free(param_1);
  return;
}




void FUN_00101cfe(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010172d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c9b(void)

{
  return;
}




undefined8 FUN_001015bb(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010172d("Calling good()...");
  FUN_001015a6();
  FUN_0010172d("Finished good()");
  FUN_0010172d("Calling bad()...");
  FUN_00101483();
  FUN_0010172d("Finished bad()");
  return 0;
}




void FUN_00101803(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001015a6(void)

{
  FUN_001014e4();
  FUN_00101545();
  return;
}




void FUN_00101c64(void)

{
  return;
}




void FUN_001018af(undefined4 param_1)

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




void FUN_00101931(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101445(undefined8 param_1)

{
  FUN_001013e8(param_1);
  return;
}




void FUN_00101620(void *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00101717(8,param_1);
  *puVar1 = 5;
  puVar1[1] = 10;
  FUN_00101785(*puVar1);
  free(param_1);
  return;
}




bool FUN_00101e02(pthread_t *param_1)

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




void FUN_001013c9(undefined8 param_1)

{
  FUN_00101620(param_1);
  return;
}




void FUN_00101c38(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101ef9(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




undefined8 FUN_00101717(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101c0f(void)

{
  return 0;
}




undefined8 FUN_00101e5d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ca6(void)

{
  return;
}




void FUN_00101cc7(void)

{
  return;
}




void FUN_00101464(undefined8 param_1)

{
  FUN_00101407(param_1);
  return;
}




void FUN_00101c85(void)

{
  return;
}




void FUN_00101fe0(void)

{
  return;
}




void FUN_001017ad(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101545(void)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = malloc(4);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar2 = malloc(8);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  FUN_00101464(pvVar1);
  return;
}




void FUN_001019bd(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101cd2(void)

{
  return;
}




undefined8 FUN_00101d35(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101cfe,local_18);
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




void FUN_00101f18(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010182e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c7a(void)

{
  return;
}




void FUN_0010195c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101753(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101483(void)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = malloc(4);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar2 = malloc(8);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  FUN_00101426(pvVar1);
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00104008);
    }
    FUN_00101310();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101cb1(void)

{
  return;
}




void FUN_00101ce8(void)

{
  return;
}




undefined8 FUN_00101e80(undefined8 *param_1)

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




void FUN_00101c6f(void)

{
  return;
}




void FUN_00101676(void *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00101717(8,param_1);
  *puVar1 = 5;
  puVar1[1] = 10;
  FUN_00101785(*puVar1);
  free(param_1);
  return;
}



